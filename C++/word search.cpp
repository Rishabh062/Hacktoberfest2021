/* Problem Statement: Given an m x n grid of characters board and a string word, return true if word exists in the grid.

  The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically 
  neighboring. The same letter cell may not be used more than once.
  Example: 
    Input: board = [["A","B","C","E"],
                    ["S","F","C","S"],
                    ["A","D","E","E"]], 
           word = "ABCCED"
    Output: true
*/

class Solution {
    bool dfs(vector<vector<char>>& board, int row, int col, const string &word, int start, int M, int N, int sLen){
        char curC;
        bool res = false;
        if( (curC = board[row][col]) != word[start]) 
            return false;
        if(start==sLen-1) 
            return true;
        board[row][col] = '*';
        if(row>0) 
            res = dfs(board, row-1, col, word, start+1, M, N, sLen);
        if(!res && row < M-1) 
            res = dfs(board, row+1, col, word, start+1, M, N, sLen);
        if(!res && col > 0)   
            res = dfs(board, row, col-1, word, start+1, M, N, sLen);
        if(!res && col < N-1) 
            res = dfs(board,  row, col+1, word, start+1, M, N, sLen);
        board[row][col] = curC;
        return res;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        int M,N,i,j,sLen = word.size();
        if( (M=board.size()) && (N=board[0].size()) && sLen){
            for(i=0; i<M; ++i)
                for(j=0; j<N; ++j)
                    if(dfs(board, i, j, word, 0, M, N, sLen)) 
                        return true;
        }
        return false;
    }
};

// Space complexity O(Length of longest word) as space complexity = depth of recursion tree. 
// Time complexity = O(n * m * 4^L) , where L = length of longest word. 
// (as in every recursive call, we are calling the function 4 times, thus exponential complexity).
