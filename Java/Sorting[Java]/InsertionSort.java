import java.util.*;
class InsertionSort {
	public static void main(String[] args) {
		int[] array = {5,0,6,8,1,-3,-8,-2,6,0,11,13,-9,10,12};
		InsertionSorting(array);
		System.out.println("Ascending sorted Array : "+Arrays.toString(array));
	}
	public static void InsertionSorting (int[] arr) {
		for (int i = 0; i < arr.length-1; i++) {
			for (int j = i+1; j > 0; j--) {
				if (arr[j] < arr[j-1]) {
					int swap = arr[j];
					arr[j] = arr[j-1];
					arr[j-1] = swap;
				}
				else
					break;
			}
		}
	}
}