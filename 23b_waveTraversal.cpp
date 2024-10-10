#include <iostream>
#include <vector>
using namespace std;

void takeInput(vector<vector<int>> &v, int n, int m)
{
    cout << "Enter the elements: ";
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> v[r][c];
        }
    }
}

void waveTraversal(vector<vector<int>> &v, int n, int m)
{
    for (int col = 0; col < m; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << v[row][col] << " ";
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << v[row][col] << " ";
            }
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of rows:";
    cin >> n;
    cout << "Enter the number of coloumns: ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    cout << "Enter the elements: ";
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> v[r][c];
        }
    }
    waveTraversal(v, n, m);

    return 0;
}