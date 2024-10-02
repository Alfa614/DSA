#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, arr[8] = {1, 1, 0, 0, 2, 2, 1, 0}, sorted[50];
    int i = 0, j = 7;
    printArr(arr, 8);
    int k = 0;
    while (k < n)
    {
        if (arr[k] == 0)
        {
            sorted[i] = 0;
            i++;
        }
        if (arr[k] == 2)
        {
            sorted[j] = 2;
            j--;
        }
        k++;
    }
    while (i < j)
    {
        sorted[i] = 1;
        i++;
    }

    printArr(sorted, 8);
    return 0;
}