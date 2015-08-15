/* Copyright */
package ucar.nc2.ft2.coverage;

import ucar.ma2.Array;
import ucar.ma2.DataType;
import ucar.ma2.IsMissingEvaluator;

import java.util.List;

/**
 * GeoReferencedArray
 *
 * @author caron
 * @since 7/11/2015
 */
public class GeoReferencedArray implements IsMissingEvaluator{
  private String coverageName;
  private DataType dataType;
  private Array data;
  private CoverageCoordSys csSubset;
  private List<CoverageCoordAxis> axes;

  public GeoReferencedArray(String coverageName, DataType dataType, Array data, List<CoverageCoordAxis> axes) {
    this.coverageName = coverageName;
    this.dataType = dataType;
    this.data = data;
    this.axes = axes;
  }

  public GeoReferencedArray(String coverageName, DataType dataType, Array data, CoverageCoordSys csSubset) {
    this.coverageName = coverageName;
    this.dataType = dataType;
    this.data = data;
    this.csSubset = csSubset;
  }

  public String getCoverageName() {
    return coverageName;
  }

  public DataType getDataType() {
    return dataType;
  }

  public Array getData() {
    return data;
  }

  public List<CoverageCoordAxis> getCoordinatesForData() {
    return axes;
  }

  public CoverageCoordSys getCoordSysForData() {
    return csSubset;
  }

  @Override
  public boolean hasMissing() {
    return true;
  }

  @Override
  public boolean isMissing(double val) {
    return Double.isNaN(val);
  }
}