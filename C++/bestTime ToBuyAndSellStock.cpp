#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int least_left=prices[0],profit=0;
        int dpl[prices.size()];
        dpl[0]=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<least_left)
                least_left=prices[i];
            if(prices[i]-least_left>profit){
                dpl[i]=profit=prices[i]-least_left;
            }
            else
                dpl[i]=dpl[i-1];
        }
        profit=0;
        int dpr[prices.size()];
        int max_right=prices[prices.size()-1];
        dpr[prices.size()-1]=0;
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]>max_right)
                max_right=prices[i];
            if(max_right-prices[i]>profit){
                profit=dpr[i]=max_right-prices[i];
            }
            else
                dpr[i]=dpr[i+1];
        }
        int max_profit=dpl[0]+dpr[0];
        for(int i=1;i<prices.size();i++){
            if(dpl[i]+dpr[i]>max_profit)
                max_profit=dpl[i]+dpr[i];
        }
        return max_profit;
    }

    int main(){
      long long n;
      cout<<"Enter the no of days";
      cin>>n;
      vector<int> prices;
      cout<<"Enter price of the days";
      for(long long i=0;i<n;i++){
        int x;
        cin>>x;
        prices.push_back(x);
      }
      int ans=maxProfit( prices);
      cout<<"Maximum Profit is:"<<ans;
    }
