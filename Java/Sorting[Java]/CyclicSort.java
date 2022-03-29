// Cyclic sort is used when we are given that the array contains numbers in a range.
// Here, array contains number in the range 1 to 7. 

import java.util.*;
class CyclicSort {
	public static void main(String[] args) {
		int arr[] = {3,5,7,6,4,1,2};
		cyclicSortingAscending(arr);
		System.out.println("Ascending sorted array : "+Arrays.toString(arr));
		cyclicSortingDescending(arr);
		System.out.println("Descending sorted array : "+Arrays.toString(arr));
	}
	public static void cyclicSortingAscending(int arr[]) {
		int i = 0;
		while (i < arr.length) {
			if (arr[i]-1 != i) {
				int swap = arr[arr[i]-1];
				arr[arr[i]-1] = arr[i];
				arr[i] = swap;
			}
			else
				i++;
		}
	}
	public static void cyclicSortingDescending(int arr[]) {
		int i = 0;
		while (i < arr.length) {
			if (i+arr[i] != arr.length) {
				int swap = arr[arr.length-arr[i]];
				arr[arr.length-arr[i]] = arr[i];
				arr[i] = swap;
			}
			else
				i++;
		}
	}
}