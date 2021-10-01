public class InsertionSort {

    public static void insertionSort(int[] array){

        for(int i = 1; i<array.length; i++){
            for(int j = 0; j<i; j++){
                if(array[i]<array[j]){
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] array = {7, 5, 9, 3, 1, 10, 4, 2};
       insertionSort(array);
        for(int i = 0; i< array.length; i++){
            System.out.print(array[i] + " ");
        }

    }
}
