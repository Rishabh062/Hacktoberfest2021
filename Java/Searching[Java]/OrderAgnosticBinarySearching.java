// Order Agnostic Binary Searching is similar to the binary searching except that you do not no whether the array is sorted in ascending or descending order.

class OrderAgnosticBinarySearching {
	public static void main(String[] args) {
		int[] array = {15,13,11,9,8,7,5,0,-2,-3,-7};
		int numToBeSearched = -2;
		int foundAtIndex = OrderAgnosticBinarySearch(array, numToBeSearched);
		if (foundAtIndex == -1)
			System.out.println("Element not found.");
		else
			System.out.println("Element found at index : "+foundAtIndex);
	}
	public static int OrderAgnosticBinarySearch(int[] arr, int num) {
		int start = 0;
		int end = arr.length-1;
		while (start <= end) {
			int mid = start+(end-start)/2;
			if (num == arr[mid])
				return mid;
			else if (num < arr[mid]) {
				if (arr[0] < arr[arr.length-1])
					end = mid-1;
				else
					start = mid+1;
			}
			else {
				if (arr[0] < arr[arr.length-1])
					start = mid+1;
				else
					end = mid-1;
			}
		}
		return -1;
	}
}