//WAP to find factorial of a number input by user
import java.util.Scanner;
public class Factorial { 
  int factorial(int n) 
  {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);//return 1 for 1 and 0 return factorial values for other
  } 
  public static void main(String[] args)      
  { 
    Factorial obj = new Factorial(); 
    Scanner input = new Scanner(System.in);
	System.out.println("Enter number :");
    int n = input.nextInt();//input from user
    System.out.println("Factorial of " + n + " is " + obj.factorial(n));//printing the factorial
   } 
} 
