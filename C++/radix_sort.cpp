#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <string.h>
using namespace std;
#define ll long long int
#define rep(a, b, c) for (ll a = b; a < c; a++)
//time complexity Od(n+k)
//space complexity O(n+k)
//k is range of input
//d is the number of digits in largest number
int getmax(int a[],int n){
    int maxi=a[0];
    for(int i=1;i<n;i++){
        maxi=max(a[i],maxi);
    }
    return maxi;
}
void countingsort(int a[],int n,int div){
    int output[n];
    int count[10]={0};
rep(i,0,n){
        count[(a[i]/div)%10]++;
    }
    rep(i,1,10){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        output[count[(a[i]/div)%10]-1]=a[i];
        count[(a[i]/div)%10]--;
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
    
    
}
void radixsort(int a[],int n){
   int m=getmax(a,n);
   for(int div=1;m/div>0;div*=10){
       countingsort(a,n,div);
   }


}
int main(){

int n;
cin>>n;
int a[n];
rep(i,0,n){
    cin>>a[i];
}
radixsort(a,n);
rep(i,0,n){
    cout<<a[i];
}
    return 0;
}
