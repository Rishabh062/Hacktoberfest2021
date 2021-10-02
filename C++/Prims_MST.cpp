// ----------------- OUTPUT ---------------------
// Enter the number of nodes
// 6
// Enter the number of edges
// 10
// Enter the edges and their weights
// 0 1 6
// 0 2 1
// 0 3 5
// 1 2 5
// 1 4 3
// 2 3 5
// 2 4 6
// 2 5 4
// 3 5 2
// 4 5 6

// MST Edges are :
// 2 - 1
// 0 - 2
// 5 - 3
// 1 - 4
// 2 - 5
// ----------------------------------------------

#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

typedef pair<int, int> Pair;

class Graph
{
    int V;
    list<pair<int, int>> *adj;

public:
    Graph(int V);

    void addEdge(int u, int v, int w);

    void PrimsAlgo();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<Pair>[V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Graph::PrimsAlgo()
{
    priority_queue<Pair, vector<Pair>, greater<Pair>> pq;

    int src = 0;

    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);

    pq.push(make_pair(0, src));
    key[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        list<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;

            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    cout << endl;
    cout << "MST Edges are : " << endl;
    for (int i = 1; i < V; ++i)
        printf("%d - %d\n", parent[i], i);
}

int main()
{
    cout << "Enter the number of nodes" << endl;
    int n;
    cin >> n;

    cout << "Enter the number of edges" << endl;
    int m;
    cin >> m;

    cout << "Enter the edges and their weights" << endl;

    Graph g(n);

    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        g.addEdge(x, y, wt);
    }

    g.PrimsAlgo();

    return 0;
}