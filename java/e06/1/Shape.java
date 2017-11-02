public class Shape {
  private String color;
  private boolean filled;

  public void setColor(String color)
  {
    this.color = color;
  }

  public void setFilled(boolean filled)
  {
    this.filled = filled;
  }

  public String getColor()
  {
    return this.color;
  }

  public boolean getFilled()
  {
    return this.filled;
  }

	public Shape() {
		this.setColor("black");
    this.setFilled(false);
	}

  public Shape(String color, boolean filled)
  {
    this.setColor(color);
    this.setFilled(filled);
  }

  public String toString()
  {
    return "[]" + this.getColor() + ", " + this.getFilled() + "]";
  }
}
