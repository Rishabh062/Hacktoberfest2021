/* Problem Statement: You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], 
with exactly one element repeated in the array.
Your task is to find the duplicate element.
Time Complexity: O(n).
Space Complexity: O(1).
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cout<<"Enter no. of elements: "<<endl;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
    int s=a[0],f=a[0];
    do
    {
        s=a[s];
        f=a[a[f]];
    }while(s!=f);
        f=a[0];
    while(s!=f)
    {
        s=a[s];
        f=a[f]; 
    }
    cout<<s;
    return 0;
}
