//pyramid Triangle 
import java.io.*;
import java.util.*;
class PyramidTriangle{
	public static void main(String args[]){
		int i,j,n,k;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the N value");
		n=sc.nextInt();
		for(i=1;i<=n;i++){
			for(j=i;j<=n;j++){
				System.out.print(" ");
			}
			for(k=1;k<i*2;k++){
				System.out.print("*");
			}
			System.out.print("\n");
		}
	}
}