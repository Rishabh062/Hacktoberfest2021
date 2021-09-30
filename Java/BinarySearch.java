public class Lec9_BinarySearch { 

    public static int binarySearch(int[] arr, int x) {
    	//Your code goes here
        
        int start = 0;
        int end = arr.length-1;
        int mid = 0;
        
        
        while (start <= end){
            
            mid = (start+end)/2;
            
            if (arr[mid] == x){
                return mid;
            }
            
           if (arr[mid]>x){
                end = mid-1;
            }
            
            if (arr[mid]<x){
                start = mid+1;
            }
                
            
        }
        return -1;
        
        //return mid;
    }

}

