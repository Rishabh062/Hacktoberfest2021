import java.util.*;

class bubble_Sort {
  static void bubbleSort(int array[]) {
    int size = array.length;

    for (int i = 0; i < size - 1; i++)
    
      for (int j = 0; j < size - i - 1; j++)

        if (array[j] > array[j + 1]) {
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
        }
  }

  public static void main(String args[]) {
      
    int[] data = { 34,89,-2, 45, 0, 11, -9 };
    bubble_Sort.bubbleSort(data);
    
    System.out.println("Sorted Array in Ascending Order:");
    System.out.println(Arrays.toString(data));
  }
}