//WAP in JAVA to find a value from array using binary search
public class BinarySearch 
{
    public static void main(String[] args) 
    {
        int[] arr = {1,2,3,4,5,6,7,8,9,10};
        int target = 8;
        int ans = binarySearch(arr, target);
        int ans2 = ans+1;
        System.out.println("The element is found at= "+ ans2 +" number position");
    }
    // return the index
    // return -1 if it does not exist
    static int binarySearch(int[] arr, int target) 
    {
        int start = 0;
        int end = arr.length - 1;
        while(start <= end) 
        {
            // find the middle element
            // might be possible that (start + end) exceeds the range of int in java
            int mid = start + (end - start) / 2;
            if (target < arr[mid]) 
            {
                end = mid - 1;
            }
            else if (target > arr[mid]) 
            {
                start = mid + 1;
            } 
            else 
            {
                //when answer found at middle
                return mid;
            }
        }
        return -1;
    }
}
