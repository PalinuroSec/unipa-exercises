public class Point2D {
  double x, y;

  public void setX(double x) {
    this.x = x;
  }

  public void setY(double y) {
    this.y = y;
  }

  public double getX() {
    return this.x;
  }

  public double getY() {
    return this.y;
  }

  public String toString() {
    return "("+this.getX()+", "+this.getY()+")";
  }
}
