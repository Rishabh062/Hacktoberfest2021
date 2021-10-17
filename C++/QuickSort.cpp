#include<iostream>
using namespace std;
void swap(int*a,int*b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	return;
}
int partition(int arr[],int s,int e)
{
	int count=0;
	int i=s;
	int j=e;
	for(int a=s+1;a<=e;a++)
	{
		if(arr[a]<arr[s])
		count++;
	}
	swap(arr[count+s],arr[s]);
	while(i<count+s || j>count+s)
	{
		if(arr[i]<arr[count+s])
		{
			i++;
		}
		else if(arr[j]>arr[count+s])
		{
			j--;
		}
		else
		{
			swap(arr[j],arr[i]);
			j--;
			i++;
		}
	}
	return (count+s);
}
void qs(int arr[],int s,int e)
{
	if(s<e)
	{
		int p=partition(arr,s,e);
		qs(arr,s,p-1);
		qs(arr,p+1,e);
	}
	else
	return;
}
int main()
{
	int n;
	int arr[10];
	cout<<"enter the no of array elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	qs(arr,1,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
