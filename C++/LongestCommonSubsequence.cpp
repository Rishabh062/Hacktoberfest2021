/*
Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, 
but not necessarily contiguous.
Time complexity : O(N*M) where N and M are size of strings.
*/
#include<bits/stdc++.h>
using namespace std;

/* Returns length of LCS for X, Y */
int lcs(string X, string Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Driver program to test */
int main()
{
    string X = "OCTOBER";
    string Y = "HACKTOBER";
    int m = X.size();
    int n = Y.size();
    cout<<"Length of LCS is "<<lcs( X, Y, m, n )<<endl;
    return 0;
}
