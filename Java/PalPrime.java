import java.util.Scanner;

class PalPrime
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter any number");
        int n = sc.nextInt();
        
        int r  = 0;
        for(int x = n ; x!=0 ; x = x/10)
        {
            int d = x%10;
            r = r*10+d;
        }
        
        int flag = 0 ; 
        
        for(int x = 2; x<=n/2 ; x++)
        {
            if(n%x==0)
            {
                flag = 1 ; 
                break;
            }
        }
        
        if(n==r && flag==0)
        {
            System.out.println("Pal-Prime");
        }
        else
        {
            System.out.println("Not Pal-Prime");
        }
    }
}
