#include<bits/stdc++.h>
using namespace std;

template<typename T>
class graph_using_map{
        map<T,list<T>> adjlist;
    public:
        graph_using_map(){

        }
        void addEDGE(T u, T v, bool isBiDirn=true){
            adjlist[u].push_back(v);
            if(isBiDirn){
                adjlist[v].push_back(u);
            }
        }
        void Print(){
            for(auto i: adjlist){
                cout<<i.first<<"-> ";
                for(auto neighbour: i.second){
                    cout<<neighbour<<", ";
                }
            cout<<endl;
            }
        }

        void bfs(T src){
            queue<T> q;
            map<T,bool> visited;

            q.push(src);
            visited[src]=true;

            while(!q.empty()){
                T node =q.front();
                cout<<node<<" ";
                q.pop();
                for(T neighbour: adjlist[node]){
                    if(!visited[neighbour]){
                        q.push(neighbour);
                        visited[neighbour]=true;
                    }
                }
            }            
        }
      
        void dfsHelper(T node, map<T,bool> &visited){
            visited[node]=true;
            cout<<node<<" ";
            // find neighbour which aren't visited

            for(T neighbour:adjlist[node]){
                if(!visited[neighbour]){
                    dfsHelper(neighbour,visited);
                }
            }
        }
        void dfs(T src){
            map<T,bool> visited;
            dfsHelper(src,visited);
        }
};

int main(){

    graph_using_map<int> g1;
    g1.addEDGE(0,1);
    g1.addEDGE(0,4);
    g1.addEDGE(4,3);
    g1.addEDGE(1,4);
    g1.addEDGE(1,2);
    g1.addEDGE(2,3);
    g1.addEDGE(1,3);

    g1.Print();

    g1.bfs(0);
    cout<<endl;
    g1.dfs(0);


}