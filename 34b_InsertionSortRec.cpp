#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
        cout << " " << arr[i];
}

void InsertionSort(int *arr, int i, int n)
{
    if (i == n)
    {
        return;
    }
    // printArr(arr, n);
    int j = i;
    int temp = arr[j];
    while (j > 0 && temp < arr[j - 1])
    {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j] = temp;
    InsertionSort(arr, i + 1, n);
}

int main()
{
    int arr[5] = {1, 3, 5, 4, 2};

    InsertionSort(arr, 1, 5);
    printArr(arr, 4);
    return 0;
}