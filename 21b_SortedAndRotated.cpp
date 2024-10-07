#include <iostream>
using namespace std;

bool sortedAndRotated(int arr[], int n)
{
    bool linear = true;
    int i = 0;
    while (i < n)
    {
        if (arr[(i + 1) % n] < arr[i])
        {
            if (linear)
            {
                linear = false;
                i++;
                continue;
            }
            else
            {
                return false;
            }
        }
        i++;
    }
    return true;
}

int main()
{
    int n, arr[50];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted and Rotated: ";
    (sortedAndRotated(arr, n)) ? cout << "Yes" : cout << "No";

    return 0;
}