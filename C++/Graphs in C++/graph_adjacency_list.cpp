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
};

int main(){
    /* graph_using_list g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(1,3);

    g.print();

    cout<<endl<<endl;*/

    graph_using_map<int> g1;
    g1.addEDGE(0,1);
    g1.addEDGE(0,4);
    g1.addEDGE(0,3);
    g1.addEDGE(2,0);
    g1.addEDGE(3,2);
    g1.addEDGE(4,1);
    g1.addEDGE(4,3);

    g1.Print();


}