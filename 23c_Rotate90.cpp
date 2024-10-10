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

void printVec(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j];
        }
    }
}

vector<vector<int>> rotate90(vector<vector<int>> &v, int n, int m)
{
    vector<vector<int>> nv(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int r = j;
            int c = n - i - 1;
            nv[r][c] = v[i][j];
        }
    }

    return nv;
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
    printVec(rotate90(v, n, m));

    return 0;
}