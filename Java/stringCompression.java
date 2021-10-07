import java.util.*;

public class stringCompression {

 
// let the string be  aaabbccccddeff  a3b2c4d2ef

    public static String stringCompression(String s)
    {

        String st =s.charAt(0)+"";
        int count =1;
        for(int i=1;i<s.length();i++)
        {

            char curr =s.charAt(i);
            char prev =s.charAt(i-1);

            if(prev ==curr)
            {
                count++;
            }
            else 
            {
                
                if(count>1)
                {
                    st+=count;
                    count =1;
                }
                
                st+=curr;
            }
    
        }
        if(count>1)
        {
            st+=count;
            count =1;
        }
        return st;
    }

    public static void main(String [] args)
    {
        Scanner scn =new Scanner(System.in);
        String s=scn.nextLine();
         System.out.println(stringCompression(s));  
    }
}


