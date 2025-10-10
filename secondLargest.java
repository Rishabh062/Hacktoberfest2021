class Solution {
   public int getSecondLargest(int[] arr) {
       
       //BETTER APPROACH O(2n)
    //     int max=Integer.MIN_VALUE;
    //     int Smax=Integer.MIN_VALUE;
    //     for(int i=0;i<arr.length;i++){
    //         if (arr[i]> max){
    //             max=arr[i];
    //         }
    //     }
    //     for( int i=0;i<arr.length;i++){
    //         if(arr[i]>Smax && arr[i]!=max){
    //             Smax=arr[i];
    //         }
    //     }
    //     return (Smax==Integer.MIN_VALUE?-1:Smax);
    
    
    //OPTIMISED APPROACH(0(n))
        int max=arr[0];
        int Smax=Integer.MIN_VALUE;
        for(int i=1;i<arr.length;i++){
            if (arr[i]> max){
                Smax=max;
                max=arr[i];
            }
            else if(arr[i]<max && arr[i]>Smax){
                Smax=arr[i];
            }
        }
        return (Smax==Integer.MIN_VALUE ? -1:Smax);
   
    }
}
