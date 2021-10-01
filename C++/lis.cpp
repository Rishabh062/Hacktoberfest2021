/*
Longest Increasing Subsequence

The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order.

Examples: 

Input: arr[] = {3, 10, 2, 1, 20}
Output: Length of LIS = 3
The longest increasing subsequence is 3, 10, 20

Input: arr[] = {3, 2}
Output: Length of LIS = 1
The longest increasing subsequences are {3} and {2}
*/

#include <bits/stdc++.h>
using namespace std;
 
/* lis() returns the length of the longest
  increasing subsequence in arr[] of size n */
int lis(int arr[], int n)
{
    int lis[n];
 
    lis[0] = 1;
 
    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
 
    // Return maximum value in lis[]
    return *max_element(lis, lis + n);
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", lis(arr, n));
 
    return 0;
}

/*
Output:
Length of lis is 5

Complexity Analysis: 

Time Complexity: O(n2). 
As nested loop is used.

Auxiliary Space: O(n). 
Use of any array to store LIS values at each index.
*/