#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int max = INT32_MIN, min = INT32_MAX;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    int i = 0;
    while (i < n)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        i++;
    }

    cout << "Maximum Element in this array is: " << max << endl;
    cout << "Minimum Element in this array is: " << min << endl;

    return 0;
}