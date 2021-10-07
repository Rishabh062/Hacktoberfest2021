// Problem Link : - https://www.codechef.com/problems/BUTYPAIR



#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long x;
		map<long long, long long> m;
		for (long long i = 0; i < n; ++i)
		{
			cin>>x;
			m[x] ++;
		}
		long long ans = 0;
		for(auto it:m){
			ans += ((n-it.second)*it.second);
		}
		cout<<ans<<endl;
	}
	
}