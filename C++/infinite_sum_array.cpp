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