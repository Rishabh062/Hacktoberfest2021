class BinarySearching {
	public static void main(String[] args) {
		int[] array = {-2,-1,0,1,3,4,6,7,9,10,11,13,15};
		int numToBeSearched = 9;
		int foundAtIndex = BinarySearch(array, numToBeSearched);
		if (foundAtIndex == -1)
			System.out.println("Element not found.");
		else
			System.out.println("Element found at index : "+foundAtIndex);
	}
	public static int BinarySearch(int[] arr, int num) {
		int start = 0;
		int end = arr.length-1;
		while (start <= end) {
			int mid = start+(end-start)/2;
			if (num == arr[mid])
				return mid;
			else if (num < arr[mid])
				end = mid-1;
			else
				start = mid+1;
		}
		return -1;
	}
}