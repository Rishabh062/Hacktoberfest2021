/*
We need to insert those items in the bag (knapsack) which can easily fit inside it and find the maximum profit from it

Example:
wt[] = {1,3,4,5}; (weights of the items in the bag)
val[] = {1,4,5,7}; (values/prices of the items in the bag)
W = 7  (size of knapsack bag)

Output = 5 (max profit)

*/

#include<bits/stdc++.h>
using namespace std;
#define ln "\n";
#define TC() int t; cin >> t; while(t--)
#define IO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){}

int main(){

	IO();
	// TC() solve();
	
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
	  int n = sizeof(val) / sizeof(val[0]); 	

    int dp[n+1][W+1];

    // Step 1: Initialization of matrix
    for(int i = 0; i < n+1; i++){
      for(int j = 0; j < W+1; j++){
        if(i == 0 || j == 0)
          dp[i][j] = 0;
      }
    }

    // Step 2

    for(int i = 1; i < n+1; i++){
      for(int j = 1; j < W+1; j++){

        if(wt[i-1] <= j)
          dp[i][j] = max( (val[i-1] + dp[i-1][j - wt[i-1]]), (dp[i-1][j]) );
        else
          dp[i][j] = dp[i-1][j];

      }
    }

    cout << dp[n][W];



	return 0;
}
