import java.util.*;
class BubbleSort {
	public static void main(String[] args) {
		int[] array = {5,0,6,8,1,-3,-8,-2,6,11,10,12};
		BubbleSorting(array);
		System.out.println("Ascending sorted Array : "+Arrays.toString(array));
	}
	public static void BubbleSorting (int[] arr) {
		for (int i = 0; i < arr.length-1; i++) {
			int flag = 0;
			for (int j = 0; j < arr.length-1-i; j++) {
				if (arr[j] > arr[j+1]) {
					int swap = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = swap;
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
	}
}