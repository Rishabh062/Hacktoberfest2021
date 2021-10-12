
#include <bits/stdc++.h>
using namespace std;

int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
 
        int dp[m+1][n+1]; 
        
        for(int i = 0 ; i <= m ; i++){
            for(int j = 0 ; j <= n ; j++){
                if(i == 0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=0;
                }
                
                if(i>0 and j>0){
                    if(X[i-1]==Y[j-1]){
                        dp[i][j]= dp[i-1][j-1]+1;
                    }else{
                        dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        
        
        int x = (m+n)-(2*dp[m][n]);
        
        return x+dp[m][n];
    }

    int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
 
    cout << "Length of the shortest supersequence is "
         << shortestSuperSequence(X, Y) << endl;
 
    return 0;
}