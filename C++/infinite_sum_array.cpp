/* Problem Statement: Given an array “A” of N integers and you have also defined the new array “B” as a concatenation of array “A” for an infinite number of times.
For example, if the given array “A” is [1,2,3] then, infinite array “B” is [1,2,3,1,2,3,1,2,3,.......].
Now you are given Q queries, 
each query consists of two integers “L“ and “R”. Your task is to find the sum of the subarray from index “L” to “R” (both inclusive) in the infinite array “B” for each query.
Time Complexity: O(nlogn)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
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
        int q;
        cout<<"Enter total queries: "<<endl;
        cin>>q;
        int l,r;
        while(q--)
        {
            cin>>l>>r;
            int sum=0;
            for(int i=l-1;i<r;i++)
            {
                sum+=v[i%n];
            }
            cout<<"The infinite sum is: "<<sum<<endl;
        }
        cout<<endl;
    }
    return 0;
}
