#include <iostream>
using namespace std;

bool linearSearch(int arr[], int s, int key)
{
    int i = 0;
    while (i < s)
    {
        if (arr[i] == key)
            return true;
        i++;
    }
    return false;
}

int main()
{
    int n, key;
    int arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    linearSearch(arr, n, key) ? cout << "Element Found!!!" << endl : cout << "Not Found :(" << endl;

    return 0;
}