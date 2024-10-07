#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int round = 0; round < n - 1; round++)
    {
        for (int it = 0; it < (n - round - 1); it++)
        {
            if (arr[it + 1] < arr[it])
            {
                swap(arr[it + 1], arr[it]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int n, arr[50];
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}