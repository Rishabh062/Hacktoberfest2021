
#include <bits/stdc++.h>
using namespace std;


// Next Greater Right Element
vector<int> solve(vector<int> a)
{
    // output vector
    vector<int> ans;

    stack<int> s;
    int n = a.size();
    // from back side 
    for(int i=n-1;i>=0;i--){
        // base case
        if(s.size()==0){
            ans.push_back(-1);
        }
        else if(s.size()>0 && a[i]<s.top()){
            ans.push_back(s.top());
        }
        else if(s.size()>0 && a[i]>=s.top()){
            while(s.size()>0 && a[i]>=s.top()){
                s.pop();
            }
            if(s.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    // reverse the array bcz element store from back side
    reverse(ans.begin(),ans.end());
    
    return ans;
}

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  // print the output
  vector<int> ans = solve(v);
  for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
  }
   return 0;
}
