/*Given an array of integers of size ‘n’.
Our aim is to calculate the maximum sum of ‘k’ 
consecutive elements in the array.

I : n = 9 , k = 4
    arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20} 
O : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

I : n = 2 , k = 3
    arr[] = {2, 3}
O : Invalid
There is no subarray of size 3 as size of whole
array is 2.*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// n must be greater
	if (n < k) {
		cout << "Invalid\n";
		return -1;
	}

	// Compute sum of first window of size k
	int max_sum = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i];

	/* Compute sums of remaining windows by removing first element of previous window and adding last element of current window.*/
	int window_sum = max_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		max_sum = max(max_sum, window_sum);
	}

	return max_sum;
}

int main(){
   fast;

    int n,k;
    cin>>n>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){          //Taking inputs of the array.
        cin>>arr[i];
    }
   
    cout << maxSum(arr, n, k);
    return 0;
}
