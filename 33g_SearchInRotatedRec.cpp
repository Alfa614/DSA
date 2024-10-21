#include <iostream>
using namespace std;

void printarr(int *arr, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}
bool binarySearch(int *arr, int start, int end, int key)
{
    printarr(arr, start, end);
    int mid = start + (end - start) / 2;
    cout << "binary ka mid: " << arr[mid] << endl;
    if (start > end)
    {
        return false;
    }
    if (arr[mid] == key)
        return true;
    else if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}

int pivot(int *arr, int start, int end)
{
    printarr(arr, start, end);
    int mid = start + (end - start) / 2;
    cout << "arr[mid]=" << arr[mid] << endl;
    if (start > end)
        return -1;
    if (start == end)
        return arr[mid];
    if (arr[mid] < arr[0])
        return pivot(arr, start, mid);
    else if (arr[mid] > arr[0])
        return pivot(arr, mid + 1, end);
}
bool SearchRotated(int *arr, int start, int end, int key)
{
    int p = pivot(arr, start, end);
    if (key >= arr[p] && key <= arr[end])
    {
        return binarySearch(arr, p, end, key);
    }
    else
    {
        return binarySearch(arr, start, p - 1, key);
    }
}

int main()
{
    int arr[7] = {7, 8, 10, 1, 3, 4, 5};

    cout << SearchRotated(arr, 0, 6, 3) << endl;

    return 0;
}