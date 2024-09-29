#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n, m; //n=vertices m=edges
    cin >> n >> m;
    int cnt = 0;
    vector<vector<int>> adj_list(n);
    vector<int> indeg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        //u-->v
        adj_list[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            pq.push(i);
    }

    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        //x-->v;
        for (auto it : adj_list[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }
}
