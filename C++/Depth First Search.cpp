//This algorithms assumes that edges are bidirectional and graph is connected
// Question: Find the best path between among nodes(graph)?
/*
We are using Recursive DFS here. The algo is provided below having complexity of O(Vertex + Edges):
1. Mark the current node as visited(initially current node is the root node)
2. Check if current node is the goal, If so, then return it.
3. Iterate over children nodes of current node, and do the following:
    1. Check if a child node is not visited.
    2. If so, then, mark it as visited.
    3. Go to it's sub tree recursively until you find the goal node(In other words, do the same steps here passing the child node as the current node in the next recursive call).
    4. If the child node has the goal node in this sub tree, then, return it.
3. If goal node is not found, then goal node is not in the tree!
*/

#include<iostream> 
#include<vector>
using namespace std;

vector<int> adjList[100005]; // max number of node is 10005

void dfs(int node,vector<bool> &isVisited) 
{
	cout<<node<<' ';
	isVisited[node] = 1; //isVisited[node] = true, mark node as visited
	for(int child: adjList[node])
	{
		//if child is not visited then only visit it
		if(!isVisited[child])
		{
			//now make dfs on child 
			dfs(child, isVisited);
		}
	}
}

int main() 
{

	int N,M; // N=number of nodes, M = number of edges
	cout<<"Enter number of Nodes ";
	cin>>N;
	cout<<"Enter number of Edges ";
	cin>>M;

  for(int i = 0; i<M; i++)
  {
  	int u,v;
  	//enter nodes which are directly connected
  	cin>>u>>v;

  	//make edge v->u
  	adjList[v].push_back(u);
  	//make edge u->v
  	adjList[u].push_back(v);
  }

  vector<bool> isVisited(N+1,false); //initially all nodes will be marked unvisited

  //perform dfs with picking node 1
  cout<<"\nPerforming dfs :";
  dfs(1,isVisited);
  return 0;

  /*
	----sample----

	Enter number of Nodes 4
	Enter number of Edges 5
	3 4
	4 2
	1 4
	3 1
	2 5

	Performing dfs :1 4 3 2 5

  */

}
