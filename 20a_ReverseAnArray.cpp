#include <iostream>
using namespace std;

void reverseArray(int arr[], int n, int m)
{
    int i = m + 1, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
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
    int n, arr[50], m;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of m(after which you want to reverse): ";
    cin >> m;

    printArray(arr, n);
    cout << endl;
    reverseArray(arr, n, m);

    printArray(arr, n);

    return 0;
}