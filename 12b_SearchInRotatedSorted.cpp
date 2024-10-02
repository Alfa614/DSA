#include <iostream>
using namespace std;

int pivotEle(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n, key, arr[50];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the rotated sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to search: ";
    cin >> key;

    int pivot = pivotEle(arr, n);
    cout << "Pivot is: " << pivot << endl;
    cout << "Index of key is: ";
    if (arr[pivot] <= key && key <= arr[n - 1])
        cout << binarySearch(arr, pivot, n - 1, key);
    else
    {
        cout << binarySearch(arr, 0, pivot - 1, key);
    }

    return 0;
}