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

        void shortest_distance(T src){
            queue<T> q;
            map<T,int> dist;
            map<T,T> parent;

            for(auto i:adjlist){
                dist[i.first]=INT_MAX;
            }
            q.push(src);
            dist[src]=0;

            // parent[src]=src;

            while(!q.empty()){
                T node =q.front();
                q.pop();
                for(T neighbour: adjlist[node]){
                    if(dist[neighbour]==INT_MAX){
                        q.push(neighbour);
                        dist[neighbour]=dist[node]+1;
                        // parent[neighbour]=node;
                    }
                }
            }      
            for(auto i:adjlist){
                T node= i.first;
                cout<<"Distance of "<<node<<" from "<<src<<" is : "<<dist[node]<<endl;
            }      

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
    g1.shortest_distance(0);


}