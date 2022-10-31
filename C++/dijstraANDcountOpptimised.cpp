#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define lli long long int
#define ld long double
#define pb push_back

class Solution {
    long long mod = 1e9 + 7;
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> adj[n];
        int ans = 0;

        for (auto &it : roads) {
            int u = it[0];
            int v = it[1];
            int t = it[2];

            adj[u].push_back({ v, t });
            adj[v].push_back({ u, t });
        }

        vector<int> distTo(n, INT32_MAX);
        distTo[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // a minimum priority queue of {distTo, node}
        pq.push({ 0, 0 });

        while (!pq.empty()) {
            int distTill = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            for (auto& it : adj[u]) {

                int v = it.first;
                int newDist = distTill + it.second;

                if (v == n - 1) {
                    if (distTo[v] == newDist) {
                        ans = (ans + 1) % mod;
                    }
                    else if (distTo[v] > newDist) {
                        distTo[v] = newDist;
                        pq.push({ distTo[v], v });
                        ans = 1;
                    }
                }
                else if (distTo[v] >= newDist) {
                    distTo[v] = newDist;
                    pq.push({ distTo[v], v });
                }
            }
        }

        return ans;
    }
};


// CODE START


void solveITcaptain() {
    long long int copy;

}


// CODE END


int main() {
    system("cls");
    ios_base::sync_with_stdio(false);    cin.tie(nullptr);     cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solveITcaptain();
    }
    return 0;
}


