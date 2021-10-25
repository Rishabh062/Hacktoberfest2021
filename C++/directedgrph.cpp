#include <iostream>
#include <vector>
#include <queue>
#include<algorithm>
using namespace std;
class Edge
{
public:
    int v = 0;
    int w = 0;

    Edge(int v, int w)
    {
        this->v = v;
        this->w = w;
    }
};

int N = 7;
vector<vector<Edge>> graph(N, vector<Edge>());

void addEdge(vector<vector<Edge>> &gp, int u, int v, int w)
{
    gp[u].push_back(Edge(v, w));
    gp[v].push_back(Edge(u, w));
}

void display(vector<vector<Edge>> &gp)
{
for(int i=0;i<gp.size();i++)
{
   cout<<i<<"->";
    for(int j=0;j<gp[i].size();j++)
    {
        Edge e=gp[i][j];
        cout<<"("<<e.v<<","<<e.w<<")";
    }
     cout<<endl;
}
}
//unionFind.==============================================


int mincosttosupply(int n, vector<int> &wells, vector<vector<int>> &pipes)
{
    for( int i=0;i<wells.size();i++)
    {
        pipes.push_back(0,(i+1), wells[i]);
        par.push_back(i);
    }
    par.push_back(wells.size());

    sort(pipes.begin(),pipes.end(),[](vector<int> &a,vector<int> &b){
        return a[2]<b[2];
    });
    int cost=0;

    for(vector<int> &p: pipes)
    {
        if(findpar(p[0])!=findpar([p1]){
            cost+=p[2];
            par[findpar(p[0])]=findpar(p[1]);
        }
    }
    return cost;

}



void constructGraph()
{
    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 3, 10);
    addEdge(graph, 1, 2, 10);
    addEdge(graph, 2, 3, 40);
    addEdge(graph, 3, 4, 2);
    addEdge(graph, 4, 5, 2);
    addEdge(graph, 4, 6, 3);
    addEdge(graph, 5, 6, 8);

    // addEdge(graph, 2, 5, 2);

    display(graph);
    cout << endl;
}

void solve()
{
    constructGraph();
    
}

int main()
{
    solve();
    return 0;
}
