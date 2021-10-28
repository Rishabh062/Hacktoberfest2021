#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;
typedef long long int ll;

class Edge{
    public:
    int v, cost;
    Edge(int v1, int c){
        cost = c;
        v = v1;
    }
};
bool operator< (const Edge &e1, const Edge &e2){
        return e1.cost > e2.cost;
}


int main(){
    int V, E;
    cin>>V>>E;
    unordered_map<int, vector<Edge> > m1;
    for(int i=0;i<E;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        m1[x].push_back({y,wt});
        m1[y].push_back({x,wt});
    }
    vector<int> visited(V+1,0);
    priority_queue<Edge> pq;
    pq.push({0,0});
    while(!pq.empty()){
        Edge e1 = pq.top();
        pq.pop();
        if(visited[e1.v]){
            continue;
        }
        else{
            visited[e1.v] = 1;
            cout<<e1.v<<" "<< e1.cost<<endl;
            for(int i = 0;i< m1[e1.v].size(); i++){
                if(visited[m1[e1.v][i].v] == 0){
                    pq.push({m1[e1.v][i].v, e1.cost + m1[e1.v][i].cost});
                }
            }
        }
    }

    return 0;
}