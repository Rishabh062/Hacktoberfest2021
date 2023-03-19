#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> add(vector<vector<int>>a,vector<vector<int>>b,int n)
{
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            v[i][j]=a[i][j]+b[i][j];
    return v;
}
vector<vector<int>> sub(vector<vector<int>>a,vector<vector<int>>b,int n)
{
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            v[i][j]=a[i][j]-b[i][j];
    return v;
}
void merg(vector<vector<int>>&a,int n,vector<vector<int>>a1,vector<vector<int>>a2,vector<vector<int>>a3,vector<vector<int>>a4)
{
    for(int i=0;i<n/2;i++)
        for(int j=0;j<n/2;j++)
            a[i][j]=a1[i][j];
    for(int i=0;i<n/2;i++)
        for(int j=n/2;j<n;j++)
            a[i][j]=a2[i][j-n/2];
    for(int i=n/2;i<n;i++)
        for(int j=0;j<n/2;j++)
            a[i][j]=a3[i-n/2][j];
    for(int i=n/2;i<n;i++)
        for(int j=n/2;j<n;j++)
            a[i][j]=a4[i-n/2][j-n/2];
}
void split(vector<vector<int>>a,int n,vector<vector<int>>&a1,vector<vector<int>>&a2,vector<vector<int>>&a3,vector<vector<int>>&a4)
{
    for(int i=0;i<n/2;i++)
        for(int j=0;j<n/2;j++)
            a1[i][j]=a[i][j];
    for(int i=0;i<n/2;i++)
        for(int j=n/2;j<n;j++)
            a2[i][j-n/2]=a[i][j];
    for(int i=n/2;i<n;i++)
        for(int j=0;j<n/2;j++)
            a3[i-n/2][j]=a[i][j];
    for(int i=n/2;i<n;i++)
        for(int j=n/2;j<n;j++)
            a4[i-n/2][j-n/2]=a[i][j];
}
vector<vector<int>> mul(vector<vector<int>>a, vector<vector<int>>b,int n)
{
    if(n==2)
    {
      vector<vector<int>>v(n,vector<int>(n));
      v[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
      v[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
      v[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
      v[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
      return v;
    }
    else
    {
        vector<vector<int>>a1(n/2,vector<int>(n/2));
        vector<vector<int>>a2(n/2,vector<int>(n/2));
        vector<vector<int>>a3(n/2,vector<int>(n/2));
        vector<vector<int>>a4(n/2,vector<int>(n/2));
        vector<vector<int>>b1(n/2,vector<int>(n/2));
        vector<vector<int>>b2(n/2,vector<int>(n/2));
        vector<vector<int>>b3(n/2,vector<int>(n/2));
        vector<vector<int>>b4(n/2,vector<int>(n/2));
        split(a,n,a1,a2,a3,a4);
        split(b,n,b1,b2,b3,b4);
        vector<vector<int>>p1,p2,p3,p4,p5,p6,p7;
        p1=mul(a1,sub(b2,b4,n/2),n/2);
        p2=mul(add(a1,a2,n/2),b4,n/2);
        p3=mul(add(a3,a4,n/2),b1,n/2);
        p4=mul(a4,sub(b3,b1,n/2),n/2);
        p5=mul(add(a1,a4,n/2),add(b1,b4,n/2),n/2);
        p6=mul(sub(a2,a4,n/2),add(b3,b4,n/2),n/2);
        p7=mul(sub(a1,a3,n/2),add(b1,b2,n/2),n/2);
        vector<vector<int>>c1,c2,c3,c4;
        c1=sub(add(add(p4,p5,n/2),p6,n/2),p2,n/2);
        c2=add(p1,p2,n/2);
        c3=add(p3,p4,n/2);
        c4=sub(add(p1,p5,n/2),add(p3,p7,n/2),n/2);
        vector<vector<int>>res(n,vector<int>(n));
        merg(res,n,c1,c2,c3,c4);
        return res;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n)),res;
    vector<vector<int>> b(n,vector<int>(n));
    srand(time(0));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%100;
            b[i][j]=rand()%100;
        }
    cout<<"1st Matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<"2nd Matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    res=mul(a,b,n);
    cout<<endl<<"Using Strassen Algorithm:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<"Using Naive Theorem:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int i_=0;i_<n;i_++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                int e=a[i][j]*b[j][i_];
                sum=sum+e;
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
