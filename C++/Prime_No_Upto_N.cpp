#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector< pair<int,int> >v;
	int n,t;
	int count=0;
	cin>>t;
	while(t--){
	count=0;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    int suma=0,sumb=0;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
	suma+=a[i];	
	}
	for(int i=0;i<n;i++)
    {
    cin>>b[i];
	sumb+=b[i];	
	}
	for(int i=0;i<n;i++)
    {
    c[i]=a[i]-b[i];	
	}
    if(suma!=sumb) cout<<-1;
    else
    {
    int i=0;
    int j=n-1;
    while(i<j)
		{
		if(c[i]!=0 && c[j]!=0 && c[i]>0 && c[j]<0)
		{
		count++;
		c[i]=c[i]-1;
		c[j]=c[j]+1;
		//cout<<i+1<<" "<<j+1<<endl;
		v.push_back({i+1,j+1});
		}
		if(c[i]==0) i++;
		if(c[j]==0) j--;
		if(c[i]!=0 && c[j]!=0 && c[i]<0 && c[j]>0)
		{
		count++;
		c[i]=c[i]+1;
		c[j]=c[j]-1;
		v.push_back({i+1,j+1});
		//cout<<i+1<<" "<<j+1<<endl;	
		}
			
		}
		cout<<count<<endl;
		for(int i=0;i<v.size();i++)
		{
		cout<<v[i].first<<" "<<v[i].second<<endl;	
		}	
	}
}
    return 0; 
}
