import java.util.*;
class selectionSort
{
    public static void main(String args[])
    {
        int arr[] = {2,3,1,5,4};
        
        for(int i = 0; i < arr.length-1; i++)
        {
            int d = i;
            for(int j = i+1; j < arr.length; j++)
            {
                if(arr[j] < arr[d])
                {
                    d = j;
                }
            }
            int t = arr[i];
            arr[i] = arr[d];
            arr[d] = t;
        }
        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
