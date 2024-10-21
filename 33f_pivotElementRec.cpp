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

int main()
{
    int arr[7] = {7, 8, 10, 1, 3, 4, 5};

    cout << pivot(arr, 0, 6) << endl;

    return 0;
}