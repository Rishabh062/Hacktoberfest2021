#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<long long,long long> &a,pair<long long,long long> &b){
    return a.second<b.second;
}
int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
      long long n,x;
      cin>>n;
      vector<pair<long long,long long>>res;
      for(int i=0;i<n;i++){
        cin>>x;
        res.push_back(make_pair(x,i));
      }
      long long k=0;
      sort(res.begin(),res.end());
      for(int i=0;i<n;i++){
          if(res[i].first>k){
              res[i].first=k;
              k++;
          }else  if(res[i].first==k){
               res[i].first=k;
          }
      }
      sort(res.begin(),res.end(),cmp);
      for(int i=0;i<n;i++){
          cout<<res[i].first<<" ";
      }
      cout<<"\n";
    }
	return 0;
}
