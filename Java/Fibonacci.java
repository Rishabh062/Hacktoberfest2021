import java.util.*;
public class Fibonacci
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		int n1=0;
		int n2=1,next;
		while(n-->0){
		    System.out.print(n1+" ");
		    next=n1+n2;
		    n1=n2;
		    n2=next;
		    
		}
	}
}
