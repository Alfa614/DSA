#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
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

    cout << "First Occurence: " << FirstOccurence(arr, n, key) << endl;
    cout << "Last Occurence: " << LastOccurence(arr, n, key);

    return 0;
}