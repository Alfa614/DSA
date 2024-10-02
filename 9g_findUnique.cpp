#include <iostream>
using namespace std;

int uniqueEle(int arr[], int s)
{
    int i = 0;
    bool unique[50];
    fill_n(unique, s, true);

    while (i <= s)
    {
        int el = arr[i];
        int j = 0;
        while (j <= s && j != i)
        {
            if (el == arr[j])
            {
                unique[i] = false;
                break;
            }
            j++;
        }
        if (unique[i])
            return el;
        i++;
    }
    return -1;
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

    cout << "Unique element is: " << uniqueEle(arr, n) << endl;

    return 0;
}