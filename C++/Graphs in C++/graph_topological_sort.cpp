#include<bits/stdc++.h>
using namespace std;

template<typename T>
class graph{
        map<T,list<T>> adjlist;
    public:
        graph(){

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

                // DFS 
      
        void dfsHelper(T node, map<T,bool> &visited, list<T> &ordering){
            visited[node]=true;
            // call dfs on neighbour which aren't visited
            for(T neighbour:adjlist[node]){
                if(!visited[neighbour]){
                    dfsHelper(neighbour,visited,ordering);
                }
            }
            // all children are visited of current node
            ordering.push_front(node);
        }
        void topological_sort_dfs(){
            map<T,bool> visited;
            list<T>ordering;
            for(auto i: adjlist){
                T node= i.first;
                if(!visited[node]){
                    dfsHelper(node,visited,ordering);
                }
            }
            for(T element:ordering){
                cout<<element<<"-->";
            }
        }

        void topological_sort_bfs(){
            queue<T> q;
            map<T,bool> visited;
            map<T,bool> indegree;
            for(auto i: adjlist){
                T node=i.first;
                visited[node]=false;
                indegree[node]=0;
            }

            // calculate indegree
            for(auto i: adjlist){
                T node= i.first;
                for(T vertex: adjlist[node]){
                    indegree[vertex]++;
                }
            }   
            for(auto i: adjlist){
                T node=i.first;
                if(indegree[node]==0){
                    q.push(node);
                }
            }  
             while(!q.empty()){
                T node =q.front();
                cout<<node<<"-->";
                q.pop();
                for(T neighbour: adjlist[node]){
                    if(!visited[neighbour]){
                        indegree[neighbour]=indegree[neighbour]-1;
                        if(indegree[neighbour]==0){
                            q.push(neighbour);
                        }
                        
                    }
                }
            }          
        }
};

int main(){

    graph<string> g;

    g.addEDGE("english","programming logic",false);
    g.addEDGE("maths","programming logic",false);
    g.addEDGE("programming logic","HTML",false);
    g.addEDGE("programming logic","Java",false);
    g.addEDGE("programming logic","JS",false);
    g.addEDGE("programming logic","Python",false);
    g.addEDGE("Python","Web Dev",false);
    g.addEDGE("HTML","CSS",false);
    g.addEDGE("CSS","JS",false);
    g.addEDGE("JS","Web Dev",false);
    g.addEDGE("Python","Web Dev",false);
    g.addEDGE("Java","Web Dev",false);

    g.Print();
    cout<<endl;
    g.topological_sort_bfs();
    cout<<endl;
    g.topological_sort_dfs();
    cout<<endl;
    

}