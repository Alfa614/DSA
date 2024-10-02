#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, arr[6] = {0, 1, 1, 0, 1, 0};
    int i = 0, j = 5;
    printArr(arr, 6);
    while (i < j)
    {
        while (i != 1)
            i++;
        while (j != 0)
            j++;
        swap(arr[i], arr[j]);
    }

    printArr(arr, 6);
    return 0;
}