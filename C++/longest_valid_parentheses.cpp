#include <bits/stdc++.h>
using namespace std;
int longestValidParentheses(string s) {
        if(s.length()==0) return 0;
        vector<int>dp(s.length(),0);
        for(int i=1;i<s.length();i++){
            if(s[i]==')' && s[i-1]=='('){
                if(i-2<0) dp[i]=2;
                else dp[i]=dp[i-2]+2;
            }
            else if(s[i]==')'){
                if(i-1-dp[i-1]>=0 && s[i-1-dp[i-1]]=='(') dp[i]=dp[i-1]+(i-2-dp[i-1]>=0?dp[i-2-dp[i-1]]:0)+2;
            }
        }

        return *max_element(dp.begin(),dp.end());
}

int main(){
  string s = ")()())";
  cout<<longestValidParentheses(s);
  return 0;
}
