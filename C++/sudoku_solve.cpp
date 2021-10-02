#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n = 9;
/*
given a valid input for sudoku problem like one in the newspapers, it solves and returns a valid answer
*/
bool check(vector<vector<int>> &board, int row, int col, int key){
    //checking in row 
    for(int j1=0;j1<n;j1++){
        if(board[row][j1]==key) return 0;
    }
    //checking in col 
    for(int j1=0;j1<n;j1++){
        if(board[j1][col]==key) return 0;
    }
    //checking in small box
    int x0 = (row/3);
    x0 *= 3;
    int x1 = col/3;
    x1 *= 3;
    for(int i1=x0;i1<x0+3;i1++){
        for(int j1=x1;j1<x1+3;j1++){
            if(board[i1][j1]==key) return 0;
        }
    }
    return 1;
}
void printt(vector<vector<int>> &board){
    for(int i = 0; i<9;i++){
        for(int j =0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool checksudoku(vector<vector<int>> &board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0) return 0;
        }
    }
    return 1;
}
void sudoku(vector<vector<int>> &board, int row, int col){
    if(row == 9){
        printt(board);
        
        return;
    }
    int nr,nc;
    if(col==8){
        nr=row+1;
        nc=0;
    }
    else{
        nr=row; nc = col+1;
    }

    if(board[row][col]!=0){
        sudoku(board,nr,nc);
    }
    else{
        for(int i = 1;i<=9;i++){
            if(board[row][col]==0 && check(board,row,col,i)==1){
                board[row][col] = i;
                sudoku(board,nr,nc);
                board[row][col]=0;
            }
        }

    }

    


}




int main() {
    int n, m;
    n=9,m=9;
    vector < vector < int >> arr(n, vector < int > (m));
    vector < vector < int >> visited(n, vector < int > (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j]) visited[i][j]=1;
        }
    }
    sudoku(arr,0,0);

    return 0;
}