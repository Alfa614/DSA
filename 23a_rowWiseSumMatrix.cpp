#include <iostream>
using namespace std;

int main()
{
    int arr[50][50], m, n, largestSum = 0;
    cout << "Enter the number of rows:";
    cin >> n;
    cout << "Enter the number of coloumns: ";
    cin >> m;
    cout << "Enter the elements: ";
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cin >> arr[r][c];
        }
    }
    for (int r = 0; r < n; r++)
    {
        int sum = 0;
        cout << "Row " << r + 1 << " : ";
        for (int c = 0; c < m; c++)
        {
            sum += arr[r][c];
        }
        if (sum > largestSum)
            largestSum = sum;
        cout << largestSum << endl;
    }
}