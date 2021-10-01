/*
Given an integer array a[ ] of N elements and an integer K, the task is to check if the array a[ ] could be divided into K non-empty 
subsets with equal sum of elements.
Note: All elements of this array should be part of exactly one partition.

N = 5
a[] = {2,1,4,5,6}
K = 3
Output: 
1


code by iamkakashi
*/
#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n, int k,vector<int>&subset,vector<vector<int>>&v,int sum,int ind,int poss,int&ans){
        if(ind==n){
            if(poss==k){
                bool check=false;
                for(int i=0;i<k;i++){
                    if(subset[i]!=sum){
                        check=true;
                    }
                }
                if(check==false){
                    ans=1;
                }
            }
            return;
        }
        for(int i=0;i<k;i++){
            if(v[i].size()>0){
                v[i].push_back(a[ind]);
                subset[i]+=a[ind];
                solve(a,n,k,subset,v,sum,ind+1,poss,ans);
                v[i].pop_back();
                subset[i]-=a[ind];
            }
            else{
                v[i].push_back(a[ind]);
                subset[i]+=a[ind];
                solve(a,n,k,subset,v,sum,ind+1,poss+1,ans);
                v[i].pop_back();
                subset[i]-=a[ind];
                break;
            }
        }
        return;
        
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         if(k==1){
             return true;
         }
         int sum=0;
         for(int i=0;i<n;i++){
             sum+=a[i];
         }
         if(n<k || sum%k!=0){
             return false;
         }
         vector<int>subsetsum(k,0);
         vector<vector<int>>v(k);
         int ans=0;
         solve(a,n,k,subsetsum,v,sum/k,0,0,ans);
         if(ans==1){
             return true;
         }
         return false;
    }
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	
    	cout<<isKPartitionPossible(a, n, k)<<endl;
    }
} 