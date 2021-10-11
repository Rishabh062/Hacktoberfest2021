#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ts;
    cin>>ts;
    int dp[ts+1]={0};
    dp[0]=1; // no. of ways for 0 coins is always 1
    for(int i=0;i<n;i++)
    {
        for(int j=a[i];j<ts+1;j++)
        {
            dp[j]+=dp[j-a[i]];
        }
    }
    cout<<dp[ts];
    return 0;
}
/*
Coin Change Combination


Question
1. You are given a number n, representing the count of coins.
2. You are given n numbers, representing the denominations of n coins.
3. You are given a number "amt".
4. You are required to calculate and print the number of combinations of the n coins using which the 
     amount "amt" can be paid.

Note1 -> You have an infinite supply of each coin denomination i.e. same coin denomination can be used for many installments in payment of "amt"
Note2 -> You are required to find the count of combinations and not permutations i.e. 2 + 2 + 3 = 7 and 2 + 3 + 2 = 7 and 3 + 2 + 2 = 7 are different permutations of same combination. You should treat them as 1 and not 3.

Sample Input
4
2
3
5
6
7
Sample Output
2
*/
