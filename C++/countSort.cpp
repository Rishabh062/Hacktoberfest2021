#include <bits/stdc++.h>
using namespace std;
void count(int a[],int n){
    int k=a[0];
    for(int i=0;i<n;i++)
        k=max(k,a[i]);
    
    int count[k+1]={0};
    
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[a[i]]]=a[i];
    }
    
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}
int main() {
    int a[]={1,4,4,1,0,1};
    count(a,6);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
}
