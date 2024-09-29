#include<bits/stdc++.h>
using namespace std;
//adding edges to create graph
void addEdge(vector<int>adj[],int u,int v)
{
     adj[u].push_back(v);
     adj[v].push_back(u);
}

bool checkforCycle(int s,int V,vector<int>adj[],vector<bool>&visited)
{
   queue<pair<int,int>>q;
   visited[s]=true;
   q.push({s,-1});
   while(!q.empty())
   {
      int node=q.front().first;
      int parent=q.front().second;
      q.pop();
      for(auto it:adj[node])
      {
        if(!visited[it])
        {
           visited[it]=true;
           q.push({it,node});
        }
        else if(parent!=it)
        return true;
      }
   }
   return false;
}

bool isCycle(int V,vector<int>adj[])
{
   vector<bool>visited(V+1,false);
   for(int i=1;i<=V;i++)
   {
     if(!visited[i])
     {
       if(checkforCycle(i,V,adj,visited))
       return true;
     }
   }
   return false;
}

int main()
{
  int V=4;
  vector<int>adj[V];
  addEdge(adj,0,1);
  addEdge(adj,1,2);
  addEdge(adj,2,0);
  addEdge(adj,2,3);
  if(isCycle(V,adj))
  cout<<"Cycle is detected";
  else
  cout<<"Cycle is not detected";
  
}

