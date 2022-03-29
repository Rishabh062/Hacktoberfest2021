public class QuickSort {

    public static int partition(int[] input, int si, int ei){
        int pivot = input[si];
        int smallCount = 0;
        for (int i = si+1; i<=ei; i++){
            if(input[i]<=pivot)
                smallCount++;
        }
        //finding right position and swapping
        int pivotPos = si + smallCount;
        input[si] = input[pivotPos];
        input[pivotPos] = pivot;

        //ensuring
        int i = si, j = ei;
        while(i < pivotPos && j>pivotPos){
            if (input[i] > pivot) {
                while (input[j] > pivot) {
                    j--;
                }
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
            i++;
        }

        return pivotPos;
    }

    public static void quickSort(int[] input, int si, int ei){
        if(si >= ei){
            return;
        }
        int pivotPos = partition(input, si, ei);
        quickSort(input, si, pivotPos-1);
        quickSort(input, pivotPos+1, ei);
    }

    public static void main(String[] args) {
        int[] array = {7, 5, 9, 3, 1, 10, 4, 2};
        quickSort(array, 0 , array.length - 1);
        for(int i = 0; i< array.length; i++){
            System.out.print(array[i] + " ");
        }
    }
}

