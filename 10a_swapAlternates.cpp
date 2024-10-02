#include <iostream>
using namespace std;

void swapAlternates(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}

void swap(int i, int j)
{
    int temp = i;
    i = j;
    j = temp;
}

void printArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << " " << arr[i];
        i++;
    }
    cout << endl;
}
int main()
{
    cout << "Enter the size of array: ";
    int n, arr[100];
    cin >> n;

    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    printArray(arr, n);
    swapAlternates(arr, n);
    printArray(arr, n);

    return 0;
}
