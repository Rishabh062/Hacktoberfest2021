/*
to check whether the graph is a bipartite graph or not using breadth first search
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool bipartiteBfs(ll src, vector<ll> adj[], ll color[]){
    queue<ll> q;
    q.push(src);
    color[src] = 1;
    while(!q.empty()){
        ll node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if(color[it] == color[node])
            return false;
        }
    }
    return true;
}

bool checkBipartite(vector<ll> adj[], ll n){
    ll color[n+1];
    memset(color, -1, sizeof color);
    for(ll i=1; i<=n; i++){
        if(color[i] == -1){
            if(!bipartiteBfs(i, adj, color)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ll n,m;
    cin>>n>>m;

    vector<ll> adj[n+1];
    for(ll i=0; i<m; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(checkBipartite(adj, n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;


}



// tc = O{n}
/*
8 8
1 2
2 3
3 4
4 5
5 8
8 2
5 6
6 7
output - no
*/
