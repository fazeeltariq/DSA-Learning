#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   bool isexist(vector<vector<char>> &board, string word, int length, string ans, int row, int col, int k, vector<vector<bool>> &visited)
   {
      if (k == word.length())
      {
         return true;
      }

      if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size())
         return false;

      if (board[row][col] == word[k] && !visited[row][col])
      {
         visited[row][col] = true;
         bool found = isexist(board, word, length, ans + word[k], row + 1, col, k + 1, visited) || isexist(board, word, length, ans + word[k], row - 1, col, k + 1, visited) ||
                      isexist(board, word, length, ans + word[k], row, col + 1, k + 1, visited) ||
                      isexist(board, word, length, ans + word[k], row, col - 1, k + 1, visited);

         visited[row][col] = false;
         return found;
      }

      return false;
   }

   bool exist(vector<vector<char>> &board, string word)
   {
      int length = word.length();
      string ans;
      vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));

      for (int i = 0; i < board.size(); i++)
      {
         for (int j = 0; j < board[0].size(); j++)
         {
            if (isexist(board, word, length, ans, i, j, 0, visited))
            {
               return true;
            }
         }
      }
      return false;
   }
};
int main()
{
   // make your test cases of your own choice
   Solution s;
   return 0;
}