#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;


    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int t=0,l=0,d=n-1,r=m-1,dir=0,counter=0,flag=0;
    while(t<=d and l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++){
                // cout<<arr[t][i]<<" ";
                counter++;
                if(counter=k-1){
                    cout<<arr[t][i];
                    flag=1; break;
                }
            }
            t++;
        }
        if(dir==1){
            for(int i=t;i<=d;i++){
                counter++;
                if(counter=k-1){
                    cout<<arr[i][r]<<" ";
                    flag=1; break;
                }
            }
            r--;
        }
        if(dir==2){
            for(int i=r;i>=l;i--){
                counter++;
                if(counter=k-1){
                    cout<<arr[d][i]<<" ";
                    flag=1;
                    break;
                }
            }
            d--;
        }
        if(dir==3){
            for(int i=d;i>=t;i--){
                counter++;
                if(counter=k-1){
                    cout<<arr[i][l]<<" ";
                    flag=1;
                    break;
                }
            }
            l++;
        }
        // if(flag) break;
        dir=(dir+1)%4;
    }
    
}
