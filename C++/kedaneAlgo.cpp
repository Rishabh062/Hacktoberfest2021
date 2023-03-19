#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kadane(int arr[],int len){

    int currentSum=0;
    int maxSum=INT_MIN;

    for (int i = 0; i < len; i++)
    {
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    

}

int main(){
    
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int len= sizeof(arr)/sizeof(arr[0]);
    kadane(arr,len);   //max subarray sum is find using kadane algo
    
    return 0;
}