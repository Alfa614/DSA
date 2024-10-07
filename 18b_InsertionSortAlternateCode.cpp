#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i;
        while (j > 0)
        {
            if (arr[j - 1] > temp)
            {
                arr[j] = arr[j - 1];
                j--;
            }
            else
            {
                // agar next element ka adjacent hi uss se chhota ho toh aage
                // compare karne ki koi need hi nahi, as uske peeche wale sabh
                // chhote hi honge, just break it out
                break;
            }
        }
        arr[j] = temp;
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
    int n, arr[50];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, n);
    printArray(arr, n);
    return 0;
}