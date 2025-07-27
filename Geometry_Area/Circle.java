package sunbeam.geometry.dim2;

public class Circle {

	private double r;
	
	public Circle(double r) {
		this.r=r;
	}
	
	public double Area(){
		return 2*3.14*this.r*this.r;
	}

}

