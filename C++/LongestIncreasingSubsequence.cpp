/*
    The Longest Increasing Subsequence (LIS) problem is to find the length of the longest 
    subsequence of a given sequence such that all elements of the subsequence are sorted 
    in increasing order.
    Time complexity O(N*N)
*/
#include <bits/stdc++.h>
using namespace std;

/* lis() returns the LIS */
int lis(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;
    // bottom-up manner dp
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}

/* Driver program */
int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length of lis is "<<lis(arr, n)<<endl;
    return 0;
}
