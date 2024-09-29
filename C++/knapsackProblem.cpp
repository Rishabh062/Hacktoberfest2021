//using memoization

/ Here is the top-down approach of
// dynamic programming
#include <bits/stdc++.h>
using namespace std;
 
// Returns the value of maximum profit
int knapSackRec(int W, int wt[],
                int val[], int i,
                int** dp)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];
 
    if (wt[i] > W) {
 
        // Store the value of function call
        // stack in table before return
        dp[i][W] = knapSackRec(W, wt,
                               val, i - 1,
                               dp);
        return dp[i][W];
    }
    else {
        // Store value in a table before return
        dp[i][W] = max(val[i]
                      + knapSackRec(W - wt[i],
                                   wt, val,
                                   i - 1, dp),
                       knapSackRec(W, wt, val,
                                   i - 1, dp));
 
        // Return value of table after storing
        return dp[i][W];
    }
}
 
int knapSack(int W, int wt[], int val[], int n)
{
    // double pointer to declare the
    // table dynamically
    int** dp;
    dp = new int*[n];
 
    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];
 
    // loop to initially filled the
    // table with -1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return knapSackRec(W, wt, val, n - 1, dp);
}
 
// Driver Code
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}