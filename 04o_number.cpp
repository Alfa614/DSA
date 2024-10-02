#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    while (i <= n)
    {
        int j = 1, k = 1;
        while (k <= (n - i))
        {
            cout << "  ";
            k++;
        }
        while (j <= (i))
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}