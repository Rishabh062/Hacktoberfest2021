#include<iostream>
using namespace std;
int main(){
	 int N;
	 cin>>N;
	 
	 int co[N],i,j,io[N];
	 
	 for(i=0;i<N;i++)
	 	cin>>co[i];
	 
	 for(i=0;i<N;i++)
	 	cin>>io[i];
	 
	 int time=0;
	 i=0,j=0;
	 int k;
	 
	 while(i<N)
	 {
	 	if(co[j]==-1)
	 	{
	 		j=(j+1)%N;
	 		continue;
	 	}
	 
	 	if(io[i] !=co[j])
	 		time++;
	 	else
	 	{
	 		co[j]=-1;
	 		i++;
	 		time++;
	 	}
	 
	 	j=(j+1)%N;
	 }
	 
	 cout<<time<<endl;
	 return 0;
}
