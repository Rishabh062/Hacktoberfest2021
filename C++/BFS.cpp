#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define VI vector<int>
#define pb push_back

class Solution{
public:
	vector<int> bfsOfGraph(int v, VI adj[]){
		VI bfs;
		VI visited(v+1, 0);
		for (int i = 1; i <= v; i++)
		{
			if(!visited[i]){
				queue<int> q;
				q.push(i);
				visited[i] = 1;
				while(!q.empty()){
					int temp = q.front();
					q.pop();
					bfs.pb(temp);
					
					for(auto it: adj[temp]){
						if(!visited[it]){
							q.push(it);
							visited[it] = 1;
						}
					}
				}
			}
		}
		return bfs;
	}
};

int main(){
	fast;
	int n, m;
	cin >> n >> m;
	VI adj[n+1];
	for (int i = 0; i < m; i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	Solution obj;
	VI result = obj.bfsOfGraph(n, adj);
	for(int it: result){
		cout << it << " ";
	}
	return 0;
}

/*
 * We have been using Adjacency List
 * Complexity: O(V + E)
 * 
 * /
