package Java;

import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        // This is unsorted array
        Integer[] unsorted = new Integer[] { 12, 13, 24, 10, 3, 6, 90, 70 };

        // Let's sort using bubble sort
        bubbleSort(unsorted, 0, unsorted.length);

        // Verify sorted array
        System.out.println(Arrays.toString(unsorted));
    }

    @SuppressWarnings({ "rawtypes", "unchecked" })
    public static void bubbleSort(Object[] array, int fromIndex, int toIndex)
    {
        Object d;
        for (int i = toIndex - 1; i > fromIndex; i--)
        {
            boolean isSorted = true;
            for (int j = fromIndex; j < i; j++)
            {
                //If elements in wrong order then swap them
                if (((Comparable) array[j]).compareTo(array[j + 1]) > 0)
                {
                    isSorted = false;
                    d = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = d;
                }
            }
            //If no swapping then array is already sorted
            if (isSorted)
                break;
        }
    }
}
