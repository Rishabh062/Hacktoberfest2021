#include<iostream>
using namespace std;
int i,j,k,a,b,u,v,n,ne=1;
int m,mincost=0,cost[10][10],parent[10];
int find(int);
int uni(int ,int);
int main()
{
    cout<<"Enter the number of vertices:";
    cin>>n;
    cout<<"Enter the adjacenecy matrix:\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    cout<<"The edges of minimum cost Spanning tree are:\n\n";
    while(ne<n)
    {
        for(i=1,m=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<m)
                {
                    m=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            cout<<ne++<<" edge"<<" ("<<a<<","<<b<<")="<<m<<endl;
            mincost+=m;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<"\nMinimun cost="<<mincost;
    return 0;
}
int find(int i)
{
    while(parent[i])
    {
        i=parent[i];

    }
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
