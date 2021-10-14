/* Write an efficient program to find the sum of contiguous subarray 
within a one-dimensional array of numbers that has the largest sum. */
//if arr[]={-2,-3,4,-1,-2,1,5,-3} so the max contiguous sum possible will be 7

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long int min1 = INT_MIN;
        long long int sum =0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>=min1)
            {
                min1 = sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return min1;
    }
};
//Complexity is O(n)
int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}