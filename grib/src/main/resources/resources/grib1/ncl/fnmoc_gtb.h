/* 
 * US Navy - Fleet Numerical Meteorology and Oceanography Center
 * Center: 58
 * Subcenter: 0
 * Parameter table version: 0
 */ 

TBLE2 fnmoc_params[] = {
{1, "pressure", "Pa", "PRES"},
{2, "pressure reduced to msl", "Pa", "PRMSL"},
{3, "pressure tendency", "Pa/s", "PTEND"},
{6, "geopotential", "m*m/s/s", "GP"},
{7, "geopotential height", "gpm", "HGT"},
{8, "geometrical height", "m", "DIST"},
{9, "std deviation of height", "m", "HSTDEV"},
{11, "temperature", "K", "TMP"},
{12, "virtual temperature", "K", "VTMP"},
{13, "potential temperature", "K", "POT"},
{14, "pseudo-adiabatic potential temperature", "K", "EPOT"},
{15, "maximum temperature", "K", "TMAX"},
{16, "minimum temperature", "K", "TMIN"},
{17, "dewpoint temperature", "K", "DPT"},
{18, "dewpoint depression (or deficit)", "K", "DEPR"},
{19, "lapse rate", "K/m", "LAPR"},
{20, "visibility", "m", "VIS"},
{21, "radar spectra (1)", "non-dim", "RDSP1"},
{22, "radar spectra (2)", "non-dim", "RDSP2"},
{23, "radar spectra (3)", "non-dim", "RDSP3"},
{24, "parcel lifted index (to 500hPa)", "K", "PLI"},
{25, "temperature anomaly", "K", "TMPA"},
{26, "pressure anomaly", "Pa", "PRESA"},
{27, "geopotential height anomaly", "gpm", "GPA"},
{28, "wave spectra (1)", "non-dim", "WVSP1"},
{29, "wave spectra (2)", "non-dim", "WVSP2"},
{30, "wave spectra (3)", "non-dim", "WVSP3"},
{31, "wind direction", "Degree true", "WDIR"},
{32, "wind speed", "m/s", "WIND"},
{33, "wind u-component", "m/s", "UGRD"},
{34, "wind v-component", "m/s", "VGRD"},
{35, "stream function", "m*m/s", "STRM"},
{36, "velocity potential", "m*m/s", "VPOT"},
{37, "montgomery stream function", "m*m/s/s", "MNTSF"},
{38, "sigma coordinate vertical velocity", "1/s", "SGCVV"},
{39, "vertical velocity in Pa/s", "Pa/s", "VVEL"},
{40, "vertical velocity in m/s", "m/s", "DZDT"},
{41, "absolute vorticity", "1/s", "ABSV"},
{42, "absolute divergence", "1/s", "ABSD"},
{43, "relative vorticity", "1/s", "RELV"},
{44, "relative divergence", "1/s", "RELD"},
{45, "vertical u-component shear", "1/s", "VUCSH"},
{46, "vertical v-component shear", "1/s", "VVCSH"},
{47, "current direction", "Degree true", "DIRC"},
{48, "current speed", "m/s", "SPC"},
{49, "current u-component", "m/s", "UOGRD"},
{50, "current v-component", "m/s", "VOGRD"},
{51, "specific humidity", "kg/kg", "SPFH"},
{52, "relative humidity", "%", "RH"},
{53, "humidity mixing ratio", "kg/kg", "MIXR"},
{54, "precipitable water", "kg/m/m", "PWAT"},
{55, "vapour pressure", "Pa", "VAPP"},
{56, "saturation deficit", "Pa", "SATD"},
{57, "evaporation", "kg/m/m", "EVP"},
{58, "cloud ice", "kg/m/m", "CICE"},
{59, "precipitaiton rate", "kg/m/m/s", "PRATE"},
{60, "thunderstorm probability", "%", "TSTM"},
{61, "total precipitation", "kg/m/m", "APCP"},
{62, "large scale precipitation", "kg/m/m", "NCPCP"},
{63, "convective precipitation", "kg/m/m", "ACPCP"},
{64, "snowfall rate water equivalent", "kg/m/m/s", "SRWEQ"},
{65, "water equivalent of accumulated snow depth", "kg/m/m", "WEASD"},
{66, "snow depth", "m", "SNOD"},
{67, "mixed layer depth", "m", "MIXHT"},
{68, "transient thermocline depth", "m", "TTHDP"},
{69, "main thermocline depth", "m", "MTHD"},
{70, "main thermocline anomaly", "m", "MTHA"},
{71, "total cloud cover", "%", "TCDC"},
{72, "convective cloud cover", "%", "CDCON"},
{73, "low cloud cover", "%", "LCDC"},
{74, "medium cloud cover", "%", "MCDC"},
{75, "high cloud cover", "%", "HCDC"},
{76, "cloud water", "kg/m/m", "CWAT"},
{77, "best lifted index (to 500 hPa)", "K", "BLI"},
{78, "convective snow", "kg/m/m", "SNOC"},
{79, "large scale snow", "kg/m/m", "SNOL"},
{80, "water temperature", "K", "WTMP"},
{81, "land cover (1= land; 0= sea)", "fraction", "LAND"},
{82, "deviation of sea-level from mean", "m", "DSLM"},
{83, "terrain height", "m", "TH"},
{84, "albedo", "%", "ALBDO"},
{85, "soil temperature", "K", "TSOIL"},
{86, "soil moisture content", "kg/m/m", "SOILM"},
{87, "vegetation", "%", "VEG"},
{88, "salinity", "kg/kg", "SALTY"},
{89, "density", "kg/m/m/m", "DEN"},
{90, "water run-off", "kg/m/m", "WATR"},
{91, "ice cover (1= ice; 0= no ice)", "fraction", "ICEC"},
{92, "ice thickness", "m", "ICETK"},
{93, "ice drift direction", "Degree true", "DICED"},
{94, "ice drift speed", "m/s", "SICED"},
{95, "ice drift u-component", "m/s", "UICE"},
{96, "ice drift v-component", "m/s", "VICE"},
{97, "ice growth rate", "m/s", "ICEG"},
{98, "ice divergence", "1/s", "ICED"},
{99, "snow melt", "kg/m/m", "SNOM"},
{100, "signific height of combinedwind wave & swell", "m", "HTSGW"},
{101, "wind wave direction", "Degree true", "WVDIR"},
{102, "wind wave significant height", "m", "WVHGT"},
{103, "wind wave mean period", "s", "WVPER"},
{104, "swell wave direction", "Degree true", "SWDIR"},
{105, "swell wave significant height", "m", "SWELL"},
{106, "swell wave mean period", "s", "SWPER"},
{107, "primary wave direction", "Degree true", "DIRPW"},
{108, "primary wave mean period", "s", "PERPW"},
{109, "secondary wave direction", "Degree true", "DIRSW"},
{110, "secondary wave mean period", "s", "PERSW"},
{111, "net short-wave radiation (surface)", "W/m/m", "NSWRS"},
{112, "net long-wave radiation (surface)", "W/m/m", "NLWRS"},
{113, "net short-wave radiation (atmosphere top)", "W/m/m", "NSWRT"},
{114, "net long-wave radiation (atmosphere top)", "W/m/m", "NLWRT"},
{115, "long-wave radiation", "W/m/m", "LWAVR"},
{116, "short-wave radiation", "W/m/m", "SWAVR"},
{117, "global radiation", "W/m/m", "GRAD"},
{118, "max wave height", "m", "MAXWH"},
{121, "latent heat flux", "W/m/m", "LHTFL"},
{122, "sensible heat flux", "W/m/m", "SHTFL"},
{123, "boundary layer dissipation", "W/m/m", "BLYDP"},
{124, "momentum flux u-component", "N/m/m", "UFLX"},
{125, "momentum flux v-component", "N/m/m", "VFLX"},
{126, "wind mixing energy", "J", "WMIXE"},
{127, "image data", "non-dim", "IMGD"},
{132, "grad mod refc", "1/ft", "GMR"},
{133, "temperature of ground or sea", "K", "TGS"},
{140, "ice u-component", "m/s", "IU"},
{141, "ice v-component", "m/s", "IV"},
{145, "dynamic height", "cm", "DH"},
{146, "temperature error", "K", "TE"},
{153, "wind stress u component", "N/m/m", "WSUC"},
{154, "wind stress v component", "N/m/m", "WSVC"},
{155, "white cap probability", "%", "WCP"},
{160, "depth surface", "m", "DS"},
{162, "EOTS sea surface temperature", "K", "ESST"},
{170, "evaporation duct height", "m", "EDH"},
{171, "general acoustic ix", "XX", "GAI"},
{178, "gradient below sound level", "XX", "GBSL"},
{179, "strength of shallow sound channel", "XX", "SSSC"},
{196, "ice coverage", "%", "IC"},
{197, "sea sufrace height dorrection", "m", "SSHD"},
{209, "visual sea height", "m", "VSH"},
{210, "500MB small scale disturbance", "gpm", "SSD500"},
{211, "500MB residual pattern", "gpm", "RP500"},
{212, "500MB long wave pattern", "gpm", "LWP500"},
{213, "magnetic ditch heading", "Degree true", "MDH"},
{218, "ground wetness", "fraction", "GW"},
{220, "max wave height", "m", "MWH"},
{221, "sensible latent heat flux", "W/m/m", "SLHF"},
{222, "total heat flux", "W/m/m", "THF"},
{224, "surface frontal anal", "K/m/m", "SFA"},
{225, "fog", "%", "FOG"},
{226, "turbulent kinetic energy", "J/kg", "TKE"},
{230, "freezing level height", "m", "FLH"},
{234, "ceiling Height", "m", "CH"},
{236, "depth of sound layer", "m", "DSL"},
{240, "vlad_acst_ix", "XX", "VAI"},
{250, "solar radiation heat flux", "W/m/m", "SRHF"},
{255, "missing value", "non-dim", "MV"},
};
