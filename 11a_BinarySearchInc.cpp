#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int n, arr[50], key;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array in increasing order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }
    cout << "Enter the key to search in this array: ";
    cin >> key;

    cout << "Index of the key is: " << binarySearch(arr, n, key) << endl;

    return 0;
}