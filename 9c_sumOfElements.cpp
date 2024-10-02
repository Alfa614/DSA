#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int sum = 0;
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
        sum += arr[i];
        i++;
    }

    cout << "The sum of all the elements in this array is: " << sum << endl;

    return 0;
}