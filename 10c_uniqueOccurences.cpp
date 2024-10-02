#include <iostream>
using namespace std;

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

bool UniqueOcc(int arr[], int n)
{
    int i = 0;
    int occurences[50];
    for (int i = 0; i < n; i++)
    {
        occurences[arr[i]]++;
    }
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

    cout << "Unique Occurences: " << UniqueOcc(arr, n);

    return 0;
}
