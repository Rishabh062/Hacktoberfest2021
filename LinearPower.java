import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner scn=new Scanner (System.in);
        int x =scn.nextInt();
        int n =scn.nextInt();
        System.out.println(power(x, n));
    }
             
    public static int power(int x, int n){
        if(n==0){
            return 1;
        }
   
       
        x*=power(x, (n-1));
        return x;
        
    }
}
