#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//Partition Code or Pivot Element Creation
int partition(int a[],int l,int h)
{
	int pivot = a[l];
	int i=l,j=h,k;
	while(i<j)
	{
		while(a[i]<=pivot)
		i++;
		while(a[j]>pivot)
		j--;
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
		
	}
	swap(&a[l],&a[j]);
	return j;
}
int Quicksort(int a[],int l,int h)
{
	int j;
	if(l<h)
	{
	j = partition(a,l,h);
	Quicksort(a,l,j);
	Quicksort(a,j+1,h);
    }
	
}
int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
