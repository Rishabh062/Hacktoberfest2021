#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=4;
    int arr[n];
    unordered_map<int,int>bb;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
        bb[arr[i]]++;
        
    }
    for (auto i:bb)
    {
        cout<<i.first<<"->"<<i.second;
    }
    
    
    return 0;
}
