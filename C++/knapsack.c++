#include <bits/stdc++.h>
using namespace std;

int max1=0,wt=0;
void weight(int w[],int value[],int n,int W,int ans,int wet){
    if(n==0){
        if((max1<ans)&&(W>=0)){
            max1=ans;
            wt=W;
        }
        return;
    }    
    weight(w,value,n-1,W,ans, wet );
    W=W-w[n-1];
    ans +=value[n-1];
    weight(w,value,n-1,W,ans, wet);
}
int didika(int w[],int value[],int n,int W){
    if(n==0||W==0)
    return 0;
    if(w[n-1]>W){
        return didika(w,value,n-1,W);
    }
    return max(didika(w,value,n-1,W-w[n-1])+value[n-1],didika(w,value,n-1,W));
}
int main(){
    int W;
    cin>>W;
    int n;
    cin>>n;
    int w[n];
    int value[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>value[i];
    }
    weight(w,value,n,W,0,0);
    cout<<max1<<" "<<W-wt<<endl;
    cout<<didika(w,value,n,W);
    return 0;
} 