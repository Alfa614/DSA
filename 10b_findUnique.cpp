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

int findUnique(int arr[], int n)
{
    int i = 0;
    bool unique[50];
    fill_n(unique, n, true);

    for (int i = 0; i < n; i++)
    {
        int el = arr[i];
        int j = 0;
        while (j < n)
        {
            if (i == j)
                continue;
            if (arr[j] == arr[i])
            {
                unique[i] = false;
                break;
            }
            j++;
        }
        if (unique[i])
            return el;
    }
    return -1;
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

    cout << "Unique Element: " << findUnique(arr, n);

    return 0;
}
