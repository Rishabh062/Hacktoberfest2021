public class Lec9_Merge2SortedArrays {  

    public static int[] merge(int arr1[], int arr2[]) {
    	//Your code goes here
        
        int len1 = arr1.length;
        int len2 = arr2.length;
        //initialize third array
        int arr3[] = new int[len1+len2];
        //pointers
        int i = 0;
        int j = 0;
        int k = 0;
        
        while (i<len1 && j<len2){
            if (arr1[i]>arr2[j]){
                arr3[k++] = arr2[j++];
            }
            
            else{
                arr3[k++] = arr1[i++];
            }
        }
        
        //one of the arrays gets exausted
        
        while (i<len1){
            arr3[k++] = arr1[i++];
        }
        
        while (j<len2){
            arr3[k++] = arr2[j++];
        }
        
        return arr3;
    }


