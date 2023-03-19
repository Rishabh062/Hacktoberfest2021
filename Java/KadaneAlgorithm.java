import java.util.*;
import java.lang.*;

class Kadane{

	static int kadaneAlgo(int[] arr){

		int len = arr.length;
		int localMax = arr[0];
		int globalMax = arr[0];

		for(int i=1;i<len;i++){
			localMax = Math.max(arr[i], localMax + arr[i]);
			globalMax = Math.max(globalMax, localMax);
		}

		return globalMax;
	}

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter length of array");
		int n = sc.nextInt();

		int[] array = new int[n];
		System.out.println("Enter numbers in array");
		for(int i=0;i<n;i++){
			array[i] = sc.nextInt();
		}

		System.out.println("Max sub-array sum: " + kadaneAlgo(array));
	}
}
