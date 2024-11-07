#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> &maze, vector<vector<bool>> &visited, int a, int b)
{
    if (a < 0 || a >= maze.size())
        return false;
    if (b < 0 || b >= maze.size())
        return false;
    if (!maze[a][b])
        return false;
    if (visited[a][b])
        return false;
    return true;
}

void printMaze(vector<vector<int>> &maze)
{
    int n = maze.size();
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ((maze[i][j]) ? " X" : " .");
        }
        cout << endl;
    }
}
vector<string> path(vector<vector<int>> &maze, vector<vector<bool>> &visited, vector<string> &paths, string op, int x, int y)
{

    int n = maze.size();
    if (x == n - 1 && y == n - 1)
    {
        cout << op << " ";
        printMaze(maze);
        cout << endl;
        paths.push_back(op);
        return paths;
    }
    visited[x][y] = true;
    // down
    if (isSafe(maze, visited, x + 1, y))
    {
        op += "D";
        path(maze, visited, paths, op, x + 1, y);
        op.pop_back();
    }
    // right
    if (isSafe(maze, visited, x, y + 1))
    {
        op += "R";
        path(maze, visited, paths, op, x, y + 1);
        op.pop_back();
    }
    // left
    if (isSafe(maze, visited, x, y - 1))
    {
        op += "L";
        path(maze, visited, paths, op, x, y - 1);
        op.pop_back();
    }
    if (isSafe(maze, visited, x - 1, y))
    {
        op += "U";
        path(maze, visited, paths, op, x - 1, y);
        op.pop_back();
    }
    visited[x][y] = false;
    return paths;
}

int main()
{
    vector<vector<int>> maze = {{1, 1, 0, 0, 0, 0},
                                {0, 1, 0, 0, 0, 1},
                                {1, 1, 0, 1, 1, 1},
                                {1, 0, 0, 1, 0, 1},
                                {1, 1, 0, 1, 1, 1},
                                {0, 1, 1, 1, 0, 1}};
    vector<vector<bool>> visited(maze.size(), vector<bool>(maze.size(), false));
    string op;
    vector<string> paths;

    path(maze, visited, paths, op, 0, 0);
    return 0;
}