ARG ALPINE_VERSION=3.17.5
ARG UBUNTU_VERSION=22.04

FROM docker.io/ubuntu:${UBUNTU_VERSION} as build
# Build thredds
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update
RUN apt-get dist-upgrade -y
RUN apt-get -yq install -yq --no-install-recommends \
      openjdk-8-jdk-headless \
      gradle \
    && mkdir /usr/local/tomcat
COPY . /src
WORKDIR /src
RUN cp -a /src/.docker/thredds/. /
# thredds must be complied with java 8 (as of January 2019 support for more recent java versions is in the makings by UCAR/Unidata)
RUN dpkg -l | grep jdk | grep -v openjdk-8- | awk '{print $2}' | cut -d: -f1 | xargs --no-run-if-empty apt-get -yq remove
RUN ./gradlew assemble
RUN mv ./tds/build/libs/tds*.war thredds.war
RUN mkdir -p /usr/local/tomcat/webapps/thredds
RUN unzip -d /usr/local/tomcat/webapps/thredds thredds.war
RUN mkdir -p /usr/local/tomcat/content
RUN chmod 777 /usr/local/tomcat/content

FROM docker.io/alpine:${ALPINE_VERSION}
# Build tomcat
ARG TOMCAT_MAJOR=9
ARG TOMCAT_VERSION=9.0.80
ENV CATALINA_OPTS="-XX:InitialRAMPercentage=90.0 -XX:MaxRAMPercentage=90.0" \
    JAVA_OPTS="-server -Djava.awt.headless=true -Djava.util.prefs.systemRoot=/usr/local/tomcat/.java -Djava.util.prefs.userRoot=/usr/local/tomcat/.java/.userPrefs" \
    CATALINA_HOME=/usr/local/tomcat \
    PATH=/usr/local/tomcat/bin:$PATH \
    TIMEZONE=UTC
COPY .docker/tomcat/. /
RUN apk update && \
    apk upgrade && \
    apk add \
      curl \
      gnupg \
      dumb-init \
      fontconfig \
      openjdk8-jre \
      openssl \
      tomcat-native \
      ttf-dejavu \
      tzdata \
    && \
    cp /usr/share/zoneinfo/${TIMEZONE} /etc/localtime && \
    echo "${TIMEZONE}" > /etc/timezone && \
    mkdir -p "/usr/local/tomcat" && cd /usr/local/tomcat && gpg --import < /usr/share/tomcat/9.keys && \
    set -x && \
    export TOMCAT_TGZ_URL="https://www.apache.org/dist/tomcat/tomcat-$TOMCAT_MAJOR/v$TOMCAT_VERSION/bin/apache-tomcat-$TOMCAT_VERSION.tar.gz" && \
    curl -fSL "$TOMCAT_TGZ_URL" -o tomcat.tar.gz && \
    curl -fSL "$TOMCAT_TGZ_URL.asc" -o tomcat.tar.gz.asc && \
    gpg --verify tomcat.tar.gz.asc && \
    tar -xvf tomcat.tar.gz --strip-components=1 && \
    rm bin/*.bat && \
    rm tomcat.tar.gz* && \
    mkdir -p conf/Catalina/localhost && \
    apk del \
      gnupg \
    && \
    mkdir -p /usr/local/tomcat/.java/.systemPrefs && \
    mkdir /usr/local/tomcat/.java/.userPrefs && \
    chown -R root:root /usr/local/tomcat && \
    chmod go-w -R /usr/local/tomcat && \
    chmod a+rX -R /usr/local/tomcat && \
    for SUBDIR in logs work temp; do mkdir -p /usr/local/tomcat/${SUBDIR} && chmod a+rwX -R /usr/local/tomcat/${SUBDIR}; done && \
    rm -rf /usr/local/tomcat/webapps/* && \
    cp -a /usr/share/tomcat/* /usr/local/tomcat/ && \
    rm -rf /var/cache/apk/*
WORKDIR /usr/local/tomcat
USER 65534:65534
EXPOSE 8080 8443
CMD ["/usr/bin/dumb-init", "--", "/usr/local/tomcat/bin/catalina.sh", "run"]

# Add tds
COPY --from=build /usr/local/tomcat/. /usr/local/tomcat/
ENV JAVA_OPTS="${JAVA_OPTS} -Dtds.content.root.path=/usr/local/tomcat/content"
