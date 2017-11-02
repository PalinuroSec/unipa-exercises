public class Shape {
  private String color;
  private boolean filled;

  protected void setColor(String color)
  {
    this.color = color;
  }

  protected void setFilled(boolean filled)
  {
    this.filled = filled;
  }

  protected String getColor()
  {
    return this.color;
  }

  protected boolean getFilled()
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
