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
        while (k <= (i - 1))
        {
            cout << "  ";
            k++;
        }
        while (j <= (n - i + 1))
        {
            cout << " *";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}