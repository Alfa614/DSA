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

int peak(int *arr, int start, int end)
{
    printarr(arr, start, end);
    int mid = start + (end - start) / 2;
    cout << "arr[mid]=" << arr[mid] << endl;
    if (start > end)
        return -1;
    if (start == end)
        return arr[mid];
    if (arr[mid] < arr[mid + 1])
        return peak(arr, mid + 1, end);
    else if (arr[mid] > arr[mid + 1])
        return peak(arr, start, mid);
}

int main()
{
    int arr[8] = {1, 2, 24, 32, 64, 55, 8, 6};

    cout << peak(arr, 0, 7) << endl;

    return 0;
}