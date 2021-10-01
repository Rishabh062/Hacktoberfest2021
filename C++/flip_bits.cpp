/*Problem Statement: You are given an array of integers ARR[] of size N consisting of zeros and ones. You have to select a subset and flip bits of that subset. 
You have to return the count of maximum one’s that you can obtain by flipping chosen sub-array at most once.
A flip operation is one in which you turn 1 into 0 and 0 into 1.
Time Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int flipBits(vector<int> v, int n)
{
    int ones=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            ones++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            v[i]=-1;
        }
        else
        {
            v[i]=1;
        }
    }
    int curr=0,max_sum=0;
    for(int i=0;i<n;i++)
    {
        curr+=v[i];
        max_sum = max(curr, max_sum);
        if(curr<0)
        {
            curr=0;
        }
    }
    return max_sum+ones;
}
int main()
{
    int test;
    cout<<"Enter total testcases: "<<endl;
    cin>>test;
    while(test--)
    {
        int n;
        cout<<"Enter total: "<<endl;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            v.push_back(t);
        }
        cout<<flipBits(v,n)<<endl;
    }
    return 0;
}
