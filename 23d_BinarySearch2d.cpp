#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of coloumns: ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));

    return 0;
}