#include<bits/stdc++.h>
using namespace std;
void display(int n, int b[]){
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}
void first_neg_number(int n, int a[]){
	int b[n],k=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[k]=a[i];
			k++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			b[k]=a[i];
			k++;
		}
	}
	display(n,b);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	first_neg_number(n,a);
}
