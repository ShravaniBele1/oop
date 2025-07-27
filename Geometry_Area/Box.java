package sunbeam.geometry.dim3;

public class Box {

	private double l;
	private double b;
	private double h;
	
	
	public Box(double l,double b,double h) {
		this.l=l;
		this.b=b;
		this.h=h;
	}
	
	public double Area(){
		return this.l*this.b*this.h;
	}
}
