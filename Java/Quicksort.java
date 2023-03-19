public strictfp class Quicksort {
	public static void main(String... args) {
		int [] a = {3, 7, 1, 9, 5, 4, 6, 2, 8, 0};
		quicksort(a, 0, a.length - 1);
		System.out.println(java.util.Arrays.toString(a));
		
		int [] b = {3, 7, 1, 9, 5, 4, 6, 2, 8, 0};
		quicksort(b, 0, b.length - 1);
		System.out.println(java.util.Arrays.toString(b));
	}
	
	public static void quicksort(int [] a, int p, int r) {
		if (p < r) {
			int q = partition(a, p, r);
			quicksort(a, p, q - 1);
			quicksort(a, q + 1, r);
		}
	}
	
	public static int partition(int [] a, int p, int r) {
		int x = a[r];
		int i = p - 1;
		for (int j = p; j < r; j++) {
			if (a[j] <= x) {
				i = i + 1;
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		int t = a[i + 1];
		a[i + 1] = a[r];
		a[r] = t;
		return i + 1;
	}
	
	public static void randomizedQuicksort(int [] a, int p, int r) {
		if (p < r) {
			int q = randomizedPartition(a, p, r);
			randomizedQuicksort(a, p, q - 1);
			randomizedQuicksort(a, q + 1, r);
		}
	}
	
	public static int randomizedPartition(int [] a, int p, int r) {
		int i = (new java.util.Random()).nextInt(r - p + 1) + p;
		int t = a[i];
		a[i] = a[r];
		a[r] = t;
		return partition(a, p, r);
	}
}