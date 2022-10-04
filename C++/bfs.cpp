#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int v, int s)
{
  bool visited[v + 1];
  for (int i = 0; i < v; i++)
  {
    visited[i] = false;
  }
  queue<int> q;
  visited[s] = true;
  q.push(s);
  while (q.empty() == false)
  {
    int u = q.front();
    q.pop();
    cout << u << " ";
    for (int v : adj[u])
    {
      if (visited[v] == false)
      {
        visited[v] = true;
        q.push(v);
      }
    }
  }
}

void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

int main()
{
  // Create a graph given in the above diagram
  int v = 4;
  vector<int> adj[v];
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 1, 2);
  addEdge(adj, 2, 0);
  addEdge(adj, 2, 3);
  addEdge(adj, 3, 3);

  BFS(adj, v, 0);
}