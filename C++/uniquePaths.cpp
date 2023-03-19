#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
        int arr[n+1][m+1];
      
        memset(arr,0,sizeof(arr));
        arr[0][1]=1;
     
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[n][m];
    }

int main()
{
  int n,m;
  cin>>n>>m;
  cout<<uniquePaths(n,m);

    return 0;
}