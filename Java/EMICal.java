package emical;
 
import java.util.*;

public class EMICal {

 
    public static void main(String []args)
    {
         
        //Scanner class to take user input.
        Scanner Obj1 = new Scanner(System.in);
         
        double principals, Rate, Time, EMI;
  
        System.out.print("Enter principal: ");
        principals = Obj1.nextFloat();
      
        System.out.print("Enter rate: ");
        Rate = Obj1.nextFloat();
      
        System.out.print("Enter time in year: ");
        Time = Obj1.nextFloat();
      
        Rate=Rate/(12*100); /*one month interest*/
        Time=Time*12; /*one month period*/
      
      
        EMI= (principals*Rate*Math.pow(1+Rate,Time))/(Math.pow(1+Rate,Time)-1);
      
        System.out.print("Monthly EMI is= "+EMI+"\n");
                 
    }
}
