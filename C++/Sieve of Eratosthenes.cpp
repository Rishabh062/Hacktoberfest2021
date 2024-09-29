#include<iostream>
#include<vector>
using namespace std;
void SOE(int n)
{
	vector<bool> v;
	v.push_back(false);
	v[1]=false;
	for(int i=2;i<=n;i++)
	 v[i]=true;
	 
	for(int i=2;i*i<=n;i++)
	 for(int j=2*i;j<=n;j+=i)
	  v[j]=false;
	  
	for(int i=0;i<=n;i++)
	 if(v[i])
	  cout<<i<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number of elements to check the prime numbers in ";
	cin>>n;
	SOE(n);
	return 0;
}
