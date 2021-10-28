#include "bits/stdc++.h"
using namespace std;
int arr[10000]={0};
void tilingProblemIterative(int n){
	int arr[n+1];
	arr[1] = 1;
	arr[2] = 2 ;
	for(int i = 3;i<n+1;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	cout<<arr[n]<<endl;
}
int tilingProblemRecursive(int n){
	if(n < 2) return 1;
	if(n==2) return 2;
	//cout<<arr[n]<<endl;
	if(arr[n]==0){
		arr[n] = tilingProblemRecursive(n-1) + tilingProblemRecursive(n-2);
	}

	return arr[n];
}
int main(){
	cout<<tilingProblemRecursive(5);
	return 0;
}