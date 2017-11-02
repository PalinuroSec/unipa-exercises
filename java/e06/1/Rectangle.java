public class Rectangle extends Shape {
  private double height;
  private double width;

  public void setHeight(double height)
  {
    this.height = height;
  }

  public double getHeight()
  {
    return this.height;
  }

  public void setWidth(double width)
  {
    this.width = width;
  }

  public double getWidth()
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
