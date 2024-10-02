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
    int n, arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    int i = 0, j = 7;
    printArr(arr, 8);
    while (i < j)
    {
        while (arr[i] != 1)
            i++;
        while (arr[j] != 0)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
        i++, j--;
    }

    printArr(arr, 8);
    return 0;
}