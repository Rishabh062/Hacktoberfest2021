/*
Is Graph Bipartite?

Examples:

Input: graph = [[1,2,3],[0,2],[0,1,3],[0,2]]
Output: false

Input: graph = [[1,3],[0,2],[1,3],[0,2]]
Output: true
*/

#include <bits/stdc++.h>
class Solution {
public:
    
    bool check(int node,vector<vector<int>> &graph,int color[]){
        if(color[node]==-1)
        color[node]=1;
        
        for(auto it : graph[node]){
            
            if(color[it]==-1){
                color[it]=1-color[node];
                if(!check(it,graph,color))
                    return false;
            }
            else if(color[it]==color[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        int color[n];
        memset(color,-1,sizeof color);
        
        for(int i=0;i<n;i++){
            
            if(color[i]==-1){
                if(!check(i,graph,color))
                    return false;
            }
        }
        return true;
    }
};