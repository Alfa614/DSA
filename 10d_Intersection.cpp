#include <iostream>
using namespace std;

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

int main()
{
    int a[50], b[50], intersection[50], k = 0, n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    cout << "Enter the size of the second array: ";
    cin >> m;

    cout << "Enter the elements of first array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") => ";
        cin >> a[i];
    }
    cout << "Enter the elements of second array: " << endl;

    for (int i = 0; i < m; i++)
    {
        cout << i + 1 << ") => ";
        cin >> b[i];
    }

    int i = 0;
    while (i < n)
    {
        int el = a[i];
        int j = 0;
        while (j < m)
        {
            if (el < b[j])
                break;
            if (b[j] == el)
            {
                intersection[k] = el;
                k++;
                b[j] = INT16_MIN; // So that agar first array mein ek aur baar "el" ho,
                // toh yehi wala na match ho jaye b[] mein se;
                break;
            }
            j++;
        }
        i++;
    }

    printArray(intersection, k);

    return 0;
}