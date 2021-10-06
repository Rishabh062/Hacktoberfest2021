/*
Count Number of Islands

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
*/

class Solution {
public:
    
    void solve(vector<vector<char>>& grid,int i,int j,int r,int c,vector<vector<int>>& vis){
        
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j] == '0' || vis[i][j])
            return;
        
        vis[i][j] = 1;
        
        solve(grid,i+1,j,r,c,vis);
        solve(grid,i,j-1,r,c,vis);
        solve(grid,i-1,j,r,c,vis);
        solve(grid,i,j+1,r,c,vis);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(r,vector<int>(c,0));
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    count++;
                    solve(grid,i,j,r,c,vis);
                }
            }
        }
        return count;
    }
};

