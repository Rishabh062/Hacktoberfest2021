#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int u;
    int v;
    int w;
};

struct point
{
    int parent;
    int rank;
};

int comp(edge a, edge b)
{
    if (a.w == b.w)
        return a.v < b.v;
    return a.w < b.w;
}

int find(point subset[], int node)
{
    if (subset[node].parent == -1)
        return node;
    return subset[node].parent = find(subset, subset[node].parent);
}

void unionFun(point subset[], int xroot, int yroot)
{
    if (subset[yroot].rank >= subset[xroot].rank)
    {
        subset[xroot].parent = yroot;
        subset[yroot].rank += subset[xroot].rank;
    }
    else
    {
        subset[yroot].parent = xroot;
        subset[xroot].rank += subset[yroot].rank;
    }
}

void kruskalMST(vector<edge> graph, int V, int E)
{
    sort(graph.begin(), graph.end(), comp);
    point subset[V];
    int cost = 0;

    for (int i = 0; i < V; i++)
    {
        subset[i].parent = -1;
        subset[i].rank = 1;
    }

    int cnt = 0;
    vector<edge> ans;
    for (int i = 0; cnt < V - 1, i < E; i++)
    {
        edge node = graph[i];
        int u = node.u;
        int v = node.v;
        int w = node.w;

        int xroot = find(subset, u);
        int yroot = find(subset, v);

        if (xroot != yroot)
        {
            cost += w;
            ans.push_back(node);
            unionFun(subset, xroot, yroot);
        }
    }
    cout << cost << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].u << " " << ans[i].v << " " << ans[i].w << endl;
    }
}

int main()
{
    int V = 4;
    int E = 5;

    vector<edge> graph;
    graph.push_back({0, 1, 10});
    graph.push_back({0, 2, 6});
    graph.push_back({0, 3, 5});
    graph.push_back({1, 3, 15});
    graph.push_back({2, 3, 4});

    kruskalMST(graph, V, E);
    return 0;
}
