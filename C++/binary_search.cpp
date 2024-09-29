#include <bits/stdc++.h>
using namespace std;

//define array globally
const int N = 1e6 +4;

int a[N];
int n;//array size

//element to be searched in array
int k;

bool check(int dig)
{
	
	int ele=a[dig];


	if(k<=ele)
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
void binsrch(int lo,int hi)
{
	while(lo<hi)
	{
		int mid=(lo+hi)/2;
		if(check(mid))
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}

	if(a[lo]==k)
		cout<<"Element found at index "<<lo;// 0 based indexing
	else
		cout<<"Element doesnt exist in array";//element was not in our array

}


int main()
{
	cin>>n;
for(int i=0; i<n; i++)
{
	cin>>a[i];
}
cin>>k;



binsrch(0,n);

	return 0;
}
