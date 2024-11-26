import java.util.*;

public class CumulativeSum{
    public static void main(String[] args){
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int n=sc.nextInt();
        if(n>0 && n<21){
            int[] a=new int[n];
            System.out.println("Enter the elements");
            for(int i=0;i<n;i++)
                a[i]=sc.nextInt();
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
                System.out.print(sum+" ");
            }
        }
        else{
            System.out.println("Invalid Range");
        }
    }
}
