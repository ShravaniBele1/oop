package sunbeam.geometry.dim3;

public class Cylinder {

		private double r;
		private double h;
		
		public Cylinder(double r,double h) {
			this.r=r;
			this.h=h;
		}
		
		public double Area(){
			return 2*3.14*this.r*this.h;
		}

}


