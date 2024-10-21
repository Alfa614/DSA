#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
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

int main()
{
    int arr[5] = {1, 2, 5, 8, 12};

    cout << binarySearch(arr, 0, 4, 7) << endl;

    return 0;
}