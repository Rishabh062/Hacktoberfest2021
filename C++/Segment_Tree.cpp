#include <bits/stdc++.h>
#define int long long  int
using namespace std;
struct segmentTree
{
    vector<int> st;
    int n;
    void init(int size)
    {
        this->n=size;
        st.resize(4*n,0);
        
    }
    void build(int start,int end,int node ,vector<int> &v)
    {
        if(start==end)
        {
            st[node]=v[start];
            return ;

        }

        int mid=(start+end)/2;
        build(start,mid,2*node+1,v);
        build(mid+1,end,2*node+2,v);
        st[node]=st[2*node+1]+st[2*node+2];


    }
    void build(vector<int> &v)
    {
        build(0,v.size()-1,0,v);

    }
    int query(int start,int end,int l,int r,int node)
    {
        if(start>r || end<l)//non overlapping case
        return 0;
        if(start>=l && end<=r)//completey overlapping region
        return st[node];
//partial case
        int mid=(start+end)/2;
        int q1=query(start,mid,l,r,2*node+1);
        int  q2=query(mid+1,end,l,r,2*node+2);
        return q1+q2;


    }
    int query(int l,int r)
    {
        return query(0,n-1,l,r,0);//first four parameters are for checking overlapping,no-overlapping and partially overlapping conditions

    }
    void update(int start,int end ,int node,int index ,int value)
    {
        if(start==end)
        {
            st[node]=value;
            return ;

        }
        int mid=(start+end)/2;
        if(index<=mid)
        {
            update(start,mid,2*node+1,index,value);
        }
        else
        {
            update(mid+1,end,2*node+2,index,value);

        }
        st[node]=st[2*node +1]+st[2*node+2];
        return ;

    }
    void update(int x,int y )//at index 'x ' update the value to 'y'
    {
        update(0,n-1,0,x,y);//start from the root node

    }


};

int32_t main()
{

vector<int> v={2 ,1 ,5 ,9 ,3,4,2,8};

segmentTree tree;
tree.init(v.size());
tree.build(v);
cout<<tree.query(1,3)<<endl;
tree.update(4,10);
cout<<v[4]<<endl;
cout<<tree.query(0,4)<<endl;
cout<<tree.query(2,6)<<endl;





    return 0;
}
