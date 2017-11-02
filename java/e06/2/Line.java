public class Line {
  private Point2D p0, p1;

  public boolean belongsTo(Point2D pn) {
    return isInLine(pn);
  }

  protected boolean isInLine(Point2D pn) {
    if((pn.getY() - p0.getY())/(p1.getY() - p0.getY()) == (pn.getX() - p0.getX())/(p1.getX() - p0.getX())) {
      return true;
    }
    else {
      return false;
    }
  }

  public void Line() {
    this.p0.setXY(0, 0);
    this.p1.setXY(1, 1);
  }

  public void Line(Point2D p0, Point2D p1) {
    this.p0 = p0;
    this.p1 = p1;
  }

  public void Line(double p0x, double p0y, double p1x, double p1y) {
    this.p0.setXY(p0x, p0y);
    this.p1.setXY(p1x, p1y);
  }
}
