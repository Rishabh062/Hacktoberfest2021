#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
//add the edge in graph
void edge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
}
//function for bfs traversal
void bfs(int s,vector<int>adj[],bool visit[]){
  queue<int>q;//queue in STL
  q.push(s);
  visit[s]=true;
  while(!q.empty()){
    int u=q.front();
    cout<<u<<" ";
    q.pop();
//loop for traverse
    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        q.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}
//function for dfs traversal
void dfs(int s,vector<int>adj[],bool visit[]){
  stack<int>stk;//stack in STL
  stk.push(s);
  visit[s]=true;
  while(!stk.empty()){
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();
//loop for traverse
    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}
//main function
int main(){
  vector<int>adj[5];//vector of array to store the graph
  bool visit[5];//array to check visit or not of a node
  //initially all node are unvisited
  for(int i=0;i<5;i++){
    visit[i]=false;
  }
  //input for edges
  edge(adj,0,2);
  edge(adj,0,1);
  edge(adj,1,3);
  edge(adj,2,0);
  edge(adj,2,3);
  edge(adj,2,4);
  cout<<"BFS traversal is"<<"  ";
  //call bfs funtion
  bfs(0,adj,visit);//1 is a starting point
  cout<<endl;
  //again initialise all node unvisited for dfs
  for(int i=0;i<5;i++){
    visit[i]=false;
  }
  cout<<"DFS traversal is"<<"  ";
  //call dfs function
  dfs(0,adj,visit);//1 is a starting point
}
