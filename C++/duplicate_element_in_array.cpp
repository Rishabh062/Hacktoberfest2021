/* Problem Statement: You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], 
with exactly one element repeated in the array.
Your task is to find the duplicate element.
Time Complexity: O(nlogn)
*/
#include<bits/stdc++.h>
using namespace std;

//using bitwise operator xor
//x^x = 0
//0^x = x
int findRepeating(vector<int> v,int n)          //Time Complexity : O(n) , Space Complexity: O(1)
{
    int res = 0;
    for(int i=0;i<n-1;i++)
    {
        res = res^(i+1)^v[i];
    }
    res = res^v[n-1];
    return res;
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
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        cout<<"The duplicate element is:"<<findRepeating(v,n);
    }
    return 0;
}
