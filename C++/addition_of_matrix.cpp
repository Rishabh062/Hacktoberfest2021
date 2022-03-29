#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int arr1[n][m];
    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           arr2[i][j]=arr[i][j]+arr1[i][j];
           cout<<arr2[i][j]<<" "; 
        }
        cout<<"\n";
    }
}