#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int r)
{
    int i = 0, j = 0, rotated[50];
    while (j < n)
    {
        rotated[(i + r) % n] = arr[i];
        i++;
        j++;
    }
    j = 0;
    while (j < n)
    {
        arr[j] = rotated[j];
        j++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int n, arr[50], r;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value by which the array is to rotate: ";
    cin >> r;

    printArray(arr, n);
    cout << endl;
    rotateArray(arr, n, r);
    printArray(arr, n);
    return 0;
}