#include<iostream>
using namespace std;
void merge(int a[],int l,int h,int m){
	int i=l;
	int j=m+1;
	int k=l;
	int arr[50];
	while(i<=m && j<=h){
		if(a[i]<a[j])
			arr[k++]=a[i++];
		else
		arr[k++]=a[j++];
	}
	while(i<=m)
		arr[k++]=a[i++];
	while(j<=h)
		arr[k++]=a[j++];
	for(int b=l;b<=h;b++)
		a[b]=arr[b];
	return;
}
void mergesort(int a[],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		merge(a,l,h,m);
	}
	return;
}
int main(){
	int n;
	cout<<"enter the array size: ";
	cin>>n;
	int a[n];
	cout<<"enter the array elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
