public class Solution {

	public static int findDuplicate(int[] arr) {

        int sum=0, sum2=0;
        for (int i=0; i<arr.length; i++)
        {
            sum=sum+arr[i];
        }
        for(int i=0; i<arr.length-1;i++)
        {
            sum2 =sum2 + i;
		}
        return (sum-sum2);
	}
}