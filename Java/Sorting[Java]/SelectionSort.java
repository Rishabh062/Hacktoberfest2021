import java.util.*;
class SelectionSort {
	public static void main(String[] args) {
		int[] array = {5,0,6,8,1,-3,-8,-2,6,11,13,-9,10,12};
		SelectionSorting(array);
		System.out.println("Ascending sorted Array : "+Arrays.toString(array));
	}
	public static void SelectionSorting (int[] arr) {
		for (int i = 0; i < arr.length-1; i++) {
			int loc = i;
			for (int j = i+1; j < arr.length; j++) {
				if (arr[loc] > arr[j])
					loc = j;
			}
			int swap = arr[loc];
			arr[loc] = arr[i];
			arr[i] = swap;
		}
	}
}