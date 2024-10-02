#include <iostream>
using namespace std;

void reverseArray(int arr[], int s)
{
    int i = 0;
    while (i <= (s / 2))
    {
        int temp = arr[i];
        arr[i] = arr[s - i - 1];
        arr[s - i - 1] = temp;

        i++;
    }
}

void printArray(int arr[], int s)
{
    int i = 0;
    while (i < s)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    cout << "Array was: ";
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "Array is: ";
    printArray(arr, n);

    return 0;
}