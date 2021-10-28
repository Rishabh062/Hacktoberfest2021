// DFS , Start time / End time , SubTree

#include<bits/stdc++.h>
using namespace std;

int timer=1;

vector <int> start;
vector <int> endt;

void addedge(vector<int> A[],int u,int v)
{
    A[u].push_back(v);
    A[v].push_back(u);
}

void DFSatu(int j,vector<int> d[],vector<bool> &vis)
{

start[j]=timer++;
vis[j]=true;
cout<<j;
for(int p=0;p<d[j].size();p++)
{
    if(vis[d[j][p]]==false)
    {
        DFSatu(d[j][p],d,vis);
    }
}

endt[j]=timer++;

}

void DFS(vector <int> c[] , int s)
{

vector<bool> visited(s,false);

for(int i=1;i<s;i++)
{
    if(visited[i]==false)
    {
        DFSatu(i,c,visited);
    }

}


}

void check(int x,int y)
{
    // Two nodes belong to the same subtree ( includes that node ) if after applying DFS , (start time of one is greater than other while end time of other is greater than first one.

    if( ( (start[x]>start[y])&&(endt[x]<endt[y])) || (start[x]<start[y])&&(endt[x]>endt[y]) )
    {
        cout<<" \n True";
    } 
    else
    {
        cout<<" \n False";
    }

}
    


int main()
{
int v=6;
vector <int> a;
vector <int> b[v];

start.resize(v+1,0);
endt.resize(v+1,0);

addedge(b,1,2);
addedge(b,2,3);
addedge(b,3,4);
//addedge(b,5,3);
//addedge(b,5,4);
//addedge(b,5,2);
addedge(b,1,5);

DFS(b,v);
cout<<endl;
for(int i=1;i<v;i++)
{
    cout<<i<<" "<<start[i]<<" "<<endt[i]<<endl;
}

check(2,3);
check(5,4);

return 0;

}