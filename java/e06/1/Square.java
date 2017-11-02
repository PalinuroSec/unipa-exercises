public class Square extends Rectangle {
  private double side;

  public void setSide(double side)
  {
    this.setWidth(side);
    this.setHeight(side);
    this.side = side;
  }

  public double getSide()
  {
    return this.side;
  }

	public Square() {
		this.setSide(1);
	}

  public Square(double side)
  {
    this.setSide(side);
  }

  public double getArea() {
    return this.getSide() * this.getSide();
  }

  public double getPerimeter() {
    return this.getSide() * 4;
  }

  public String toString()
  {
    return "[" + this.getColor() + ", " + this.getFilled() + ", " + this.getHeight() + ", " + this.getWidth() + this.getSide() + "]";
  }
}
