public class Circle extends Shape {
  private double radius;

  protected void setRadius(double radius)
  {
    this.radius = radius;
  }

  protected double getRadius()
  {
    return this.radius;
  }

	public Circle() {
		this.setRadius(1);
	}

  public Circle(double radius)
  {
    this.setRadius(radius);
  }

  public double getArea() {
    return this.getRadius() * this.getRadius() * Math.PI;
  }

  public double getPerimeter() {
    return 0;
  }

  public String toString()
  {
    return "[" + this.getColor() + ", " + this.getFilled() + ", " + this.getRadius() + "]";
  }
}
