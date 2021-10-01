import java.util.Scanner;
public class Factorial { 
  int factorial(int num) 
  {
    return (num == 1 || num == 0) ? 1 : num * factorial(num - 1); 
  } 
  public static void main(String[] args)      
  { 
    Factorial obj = new Factorial(); 
    Scanner input = new Scanner(System.in);
	System.out.println("Enter number :");
    int num = input.nextInt();
    System.out.println("Factorial of " + num + " is " + obj.factorial(num)); 
   } 
} 
