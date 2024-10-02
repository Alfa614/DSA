#include <iostream>
using namespace std;

int pivotEle(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int n, arr[50];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the rotated sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // logic ye hai ke arr[0] is the middle ground, arr[0] se jo bhi badha honga,
    // woh greater than wali line pe honga, and less wala smaller elements ki line mein;

    cout << "Pivot is: " << pivotEle(arr, n) << endl;

    return 0;
}