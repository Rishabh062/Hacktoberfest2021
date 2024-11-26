// There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

// For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
// Return true if you can finish all courses. Otherwise, return false.

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int in[100001];

class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        for(int i=0;i<num;i++) {
            adj[i].clear();
            in[i] = 0;
        }
        int cnt = 0;
        int n = pre.size();
        
        for(int i=0;i<n;i++) {
            adj[pre[i][1]].push_back(pre[i][0]);
            in[pre[i][0]]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<num;i++) {
            if(in[i]==0)
                q.push(i);
        }
        
        while(!q.empty()) {
            int t = q.front();
            q.pop();
            
            for(auto u:adj[t]) {
                --in[u];
                
                if(in[u]==0)
                    q.push(u);
            }
            
            cnt++;
        }
        
        if(cnt==num)
            return true;
        
        return false;
        
        //
        
    }
};