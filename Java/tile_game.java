/*

*/
import java.util.*;
public class tile_game {
    static boolean checkS(double number)    
{   
//calculating the square root of the given number  
double sqrt=Math.sqrt(number);   
//finds the floor value of the square root and comparing it with zero  
return ((sqrt - Math.floor(sqrt)) == 0);   
}   
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int a = sc.nextInt();
        double b = sc.nextDouble();
        int area = a*a;
        boolean x;
        x = checkS(b);
        while(x!=true)
        {
            b--;
            x = checkS(b);
        }
        System.out.println(b*area);
    }
}
