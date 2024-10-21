#include <iostream>
using namespace std;

int main()
{
    int **arr = new int *[3];
    int *sizes = new int[3];

    cout << "Enter the sizes: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> sizes[i];
    }

    for (int rows = 0; rows < 3; rows++)
    {
        arr[rows] = new int[sizes[rows]];
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}