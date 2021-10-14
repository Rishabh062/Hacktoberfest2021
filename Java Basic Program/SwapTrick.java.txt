import java.util.Scanner;
 
class SwapTrick
{
   public static void main(String args[])
   {
      int x, y;
      System.out.println("Enter 1st and 2nd");
      Scanner in = new Scanner(System.in); 
      x = in.nextInt();
      y = in.nextInt(); 
      System.out.println("Before Swapping\n first No. = "+x+"\n 2nd No. = "+y);
 
      y=x+y-(x=y); // check this
      
      System.out.println("After Swapping\n first No. = "+x+"\n 2nd No. = "+y);
      in.close();
   }
}