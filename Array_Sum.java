package com.sunbeam;
import java.util.Scanner;

public class Array_Sum {

	public static void main(String[] args) {
		/*int[] arr1= new int[3];
		int[] arr2= new int[] {10,20,30};
		int[] arr3= {10,20,30,40,50};*/
		
		Scanner sc=new Scanner(System.in);
		double[] arr=new double[3];
		System.out.print("Enter the elements:");
		
		for(int i=0;i<arr.length;i++)
		{
			arr[i]= sc.nextDouble();
		}
		sc.close();
		double arrayAddition= Array_Sum.arraySum(arr);
		System.out.println("Sum: "+arrayAddition);
	}
	public static double arraySum(double[] a)
	{
		double total=0;
		for(int i=0;i<a.length;i++)
		{
			total=total+a[i];
		}
		return total;
	}

}


