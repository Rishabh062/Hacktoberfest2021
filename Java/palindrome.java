//check entered string is palindrome or not
package Hacktoberfest2021.Java;
import java.util.*;


public class palindrome {
	public static void main(String args[]) {
		Scanner s= new Scanner(System.in);
		System.out.print("Enter String");
		String str=s.nextLine();
		int i=0,j=str.length()-1;
		int flag=0;
		while(i<=j) {
			if(str.charAt(i)==str.charAt(j)) {
				i++;j--;
			}
			else {
			flag=1;
			break;
			}
		}
		if(flag==0) {
			System.out.print("Palindrome");
		}
		else {
			System.out.print("Not Palindrome");
		}
	}
}
