/*
Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 


Example 1:

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.
*/



// this is a classic knapsack problem 

#include<iostream>
using namespace std; 

 bool isSubsetSum(int N, int arr[], int sum){    
        int dp[N+1][sum+1]; 
        
        for(int i = 0 ; i <= N ; i++){
            for(int j = 0 ; j <= sum ; j++){
                if(i==0){
                    dp[i][j]= false;
                }
                if(j==0){
                    dp[i][j]= true;
                }
                
                if(i>0 and j >0){

                if(arr[i-1]<=j){
                 // we use or because can't find max between two bool values
                    dp[i][j]= dp[i-1][j-arr[i-1]] or dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
           }
        }
        
        return dp[N][sum];
    }

    int main()
{
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum( n,set, sum) == true)
         cout <<"Found a subset with given sum";
    else
        cout <<"No subset with given sum";
    return 0;
}

// time complexity : O(sum*N) 