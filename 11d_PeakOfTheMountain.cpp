#include <iostream>
using namespace std;

int peakOfMountain(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
    }
    return arr[s];
}

int main()
{
    int n, arr[50];
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    cout << "Peak of the mountain is: " << peakOfMountain(arr, n);
    //This is the new line, a test for getting familiar w github;

    return 0;
}
