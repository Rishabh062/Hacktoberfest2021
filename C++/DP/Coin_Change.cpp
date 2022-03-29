//  ---------------- OUTPUT -----------------------
// Enter the number of coins
// 3
// Enter the type of coins
// 1 2 5
// Enter the amount to be made
// 11

// Minimum number of coins required are : 3
//  ------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    int dp[n + 1][amount + 1];

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= amount; ++j)
        {
            if (j == 0)
                dp[i][j] = 0;
            else if (i == 0)
                dp[i][j] = 1e5;
            else if (coins[i - 1] > j)   // when coin is 2 and amount is 1
                dp[i][j] = dp[i - 1][j]; // exclude
            else
                dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
        }
    }
    return dp[n][amount] > 1e4 ? -1 : dp[n][amount];
}

int main()
{
    cout << "Enter the number of coins" << endl;
    int n;
    cin >> n;
    cout << "Enter the type of coins" << endl;
    vector<int> coins(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << "Enter the amount to be made" << endl;
    int amt;
    cin >> amt;

    cout << endl;
    cout << "Minimum number of coins required are : " << coinChange(coins, amt) << endl;
    cout << endl;

    return 0;
}