#include<bits/stdc++.h>
using namespace std;

/*class graph_using_list{
        int v;
        list<int> *l;
    public:
        graph(int V){
            v=V;
            l= new list<int>[V];
        }
        void addEdge(int u, int v, bool isBiDirn=true){
            l[u].push_back(v);
            if(isBiDirn){
                l[v].push_back(u);
            }
        }
        void print(){
            for(int i=0;i<v;i++){
                cout<<i<<"-> ";
                for(auto neighbour:l[i]){
                    cout<<neighbour<<", ";
                }
                cout<<endl;
            }
        }
};
*/

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


}