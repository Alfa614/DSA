#include <iostream>
using namespace std;

int main()
{
    int arr[50], s, n;
    bool added[50];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of this array: ";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> arr[i];
    }

    fill_n(added, n, false);

    cout << "Enter the required sum: ";
    cin >> s;
    int i = 0;
    while (i < n && !added[i])
    {
        int el = arr[i];
        int j = i + 1;
        while (j < n && !added[j])
        {
            if ((arr[i] + arr[j]) == s)
            {
                cout << "(" << min(arr[i], arr[j]) << " , " << max(arr[i], arr[j]) << ")" << endl;
                added[i] = true;
                added[j] = true;
            }
            j++;
        }
        i++;
    }

    return 0;
}