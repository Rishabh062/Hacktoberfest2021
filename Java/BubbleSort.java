public class Lec9_BubbleSort {  

    public static void bubbleSort(int[] arr){
    	//Your code goes here
        int temp=0;
        //int count = 0;
        
        //loop for number of passes
        for(int i = 0; i< arr.length; i++){
            //swap arr[j-1] and arr[j]
            
            //loop for looping over array in pass i
            for(int j = 1; j<arr.length-i; j++){
            //while (count < arr.length-1){
                
                //compare and swap
            	if (arr[j-1]>arr[j]){
            		temp = arr[j-1];
            		arr[j-1] = arr[j];
            		arr[j] = temp;
                }
                
            //}
        }
            
        }
    }  

}
