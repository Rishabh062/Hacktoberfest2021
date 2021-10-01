#include<bits/stdc++.h>
using namespace std;

int swap(int arr[],int first,int second){
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){

        int correctindex=arr[i]-1;

        if(arr[i]!=arr[correctindex]){
            swap(arr,i,correctindex);
        } else{
            i++;
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}