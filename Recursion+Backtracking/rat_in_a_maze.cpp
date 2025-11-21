#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>> maze, vector<vector<bool>> &visited, int &count, int row, int col) {
    if (row == maze.size() - 1 && col == maze[0].size() - 1) {
        count++;
        return ;
    }

    if (row < 0 || col < 0 || row >= maze.size() || col >= maze[0].size())
        return ;

    if (maze[row][col] == 0 || visited[row][col])
        return ;

    visited[row][col] = true;

    
    backtrack(maze, visited, count, row + 1, col);
    backtrack(maze, visited, count, row - 1, col);
    backtrack(maze, visited, count, row, col - 1);
    backtrack(maze, visited, count, row, col + 1);

    visited[row][col] = false;


}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int count = 0;
    vector<vector<bool>> visited(maze.size(), vector<bool>(maze[0].size(), false));

    backtrack(maze, visited, count, 0, 0);
    cout << "\nThe paths are: " << count << endl;

    return 0;
}
