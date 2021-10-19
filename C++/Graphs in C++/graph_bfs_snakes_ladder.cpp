
//  Min distance to recah from bottom to top

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

        int min_distance(T src,T dest){
            queue<T> q;
            map<T,int> dist;
            map<T,T> parent;

            for(auto i:adjlist){
                dist[i.first]=INT_MAX;
            }
            q.push(src);
            dist[src]=0;

            parent[src]=src;

            while(!q.empty()){
                T node =q.front();
                q.pop();
                for(T neighbour: adjlist[node]){
                    if(dist[neighbour]==INT_MAX){
                        q.push(neighbour);
                        dist[neighbour]=dist[node]+1;
                        parent[neighbour]=node;
                    }
                }
            }      
            /*
            for(auto i:adjlist){
                T node= i.first;
                cout<<"Distance of "<<node<<dist[node]<<endl;
            } 
            */     

            T temp= dest;
            while(temp!=src){
                cout<<temp<<"<--";
                temp=parent[temp];
            }
            cout<<src<<endl;
            return dist[dest];
        }
};

int main(){

    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;
    

    graph_using_map<int> g;

    for(int u=0;u<=36;u++){
        for(int dice=1;dice<=6;dice++){
            int v= u + dice + board[u+dice];
            g.addEDGE(u,v,false);                 //  Inserts (u,v) pair
        }
    }
    g.Print();
    g.bfs(0);
    cout<<endl;

    cout<<"\nthe sortest distance id "<<g.min_distance(1,36)<<endl;



}