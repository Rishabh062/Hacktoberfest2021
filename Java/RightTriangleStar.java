//Right Triangle Star
import java.io.*;
import java.util.*;
class RightTriangleStar{
	public static void main(String args[]){
		int i,j,n,k;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the N value");
		n=sc.nextInt();
		for(i=0;i<n;i++){
			for(j=(n-i)-1;j>=0;j--){
				System.out.print(" ");
			}
			for(k=i;k>=0;k--){
				System.out.print("*");
			}
			System.out.print("\n");
		}
	}
}
