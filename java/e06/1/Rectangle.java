public class Rectangle extends Shape {
  private double height;
  private double width;

  protected void setHeight(double height)
  {
    this.height = height;
  }

  protected double getHeight()
  {
    return this.height;
  }

  protected void setWidth(double width)
  {
    this.width = width;
  }

  protected double getWidth()
  {
    return this.width;
  }

	public Rectangle() {
		this.setHeight(3);
    this.setWidth(2);
	}

  public Rectangle(double height, double width)
  {
    this.setHeight(height);
    this.setWidth(width);
  }

  public double getArea() {
    return this.getWidth() * this.getHeight();
  }

  public double getPerimeter() {
    return this.getWidth() * 2 + this.getHeight() * 2;
  }

  public String toString()
  {
    return "[" + this.getColor() + ", " + this.getFilled() + ", " + this.getHeight() + ", " + this.getWidth() + "]";
  }
}
