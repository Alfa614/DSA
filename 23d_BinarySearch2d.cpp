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

// It's almost same as in 1D array
bool binarySearch(vector<vector<int>> &v, int key)
{
    int row = v.size();
    int col = v[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        // THIS IS THE MAIN DIFFERENCE BETWEEN 1D AND 2D BINARY SEARCH
        int c = mid % col, r = mid / col;
        int element = v[r][c];

        if (element == key)
            return true;
        else if (element < key)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return false;
}

int main()
{
    int n, m, key;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of coloumns: ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    cout << "Enter the key: ";
    cin >> key;

    takeInput(v, n, m);
    binarySearch(v, key) ? cout << "Present" : cout << "Absent";

    return 0;
}