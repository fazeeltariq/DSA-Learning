#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool issafe(int row,int cols, int n, vector<string> board){
        // check rows
        for(int i = 0; i < row; i++){
            if(board[i][cols]=='Q') return false;
        }
        for(int i=row,j=cols;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        for(int i=row,j=cols;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void backtrack(vector<vector<string>> &queens,vector<string> &board, int n,int rows) {
        if(rows == n){
            queens.push_back(board);
            return;
        }

        for (int j = 0; j < n; j++) {
            if(issafe(rows,j,n,board)){
                board[rows][j] = 'Q';
                backtrack(queens,board,n,rows+1);
                board[rows][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> queens;
        vector<string> ans(n, string(n, '.'));
        backtrack(queens, ans, n, 0);
        return queens;
    }
};

int main()
{
    Solution s;
    // you can make board of your own choice
   return 0;
}