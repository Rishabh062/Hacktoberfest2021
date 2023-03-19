class LinearSearching {
	public static void main(String[] args) {
		int[] array = {5, 6, 7, 8, 1, -3, 0, -8, 10, 13, 11};
		int numToBeSearched = -8;
		int foundAtIndex = linearSearch(array, numToBeSearched);
		if (foundAtIndex == -1)
			System.out.println("Element not found.");
		else
			System.out.println("Element found at index : "+foundAtIndex);
	}
	public static int linearSearch(int[] arr, int num) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == num)
				return i;
		}
		return -1;
	}
}