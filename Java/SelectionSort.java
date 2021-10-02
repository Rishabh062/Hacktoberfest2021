
public class Lec9_SelectionSort {
	
	public static void selectionSort(int[] input) {
		int n = input.length;
		
		for(int i = 0; i<n-1; i++) {
			int min = input[i];
			int minIndex = i;
			
			for(int j = i+1; j<n; j++) {
				if (input[j]<min) {
					min = input[j];
					minIndex = j;
				}
			}
			
			//now swap numbers
			if(minIndex != i) {
				input[minIndex] = input[i];
				input[i] = min;
			}
			
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int input[] = {2,6,9,1,5};
		selectionSort(input);
		for(int i = 0; i<input.length; i++) {
			System.out.println(input[i] +" ");
		}

	}

}
