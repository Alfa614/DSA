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

void printSpiral(vector<vector<int>> &v, int n, int m)
{
    int row = n - 1, col = m - 1;
    int total = row * col;
    int starting_row = 0;
    int ending_row = n - 1;
    int starting_col = 0;
    int ending_col = m - 1;
    int count = 0;

    while (starting_row <= ending_row && starting_col <= ending_col && count < total)
    {
        // printing starting row:
        for (int col = starting_col; col <= ending_col && count < total; col++)
        {
            cout << v[starting_row][col];
        }
        starting_row++;
        // printing ending col:
        for (int row = starting_row; row <= ending_row && count < total; row++)
        {
            cout << v[row][ending_col];
        }
        ending_col--;

        // printing ending row:
        for (int col = ending_col; col >= starting_col && count < total; col--)
        {
            cout << v[ending_row][col];
        }
        ending_row--;

        // printing starting col:
        for (int row = ending_row; row >= starting_row && count < total; row--)
        {
            cout << v[row][starting_col];
        }
        starting_col++;
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
    takeInput(v, n, m);
    printSpiral(v, n, m);

    return 0;
}