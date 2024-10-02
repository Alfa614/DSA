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
        while (j <= (n - i))
        {
            cout << "  ";
            j++;
        }
        while (k <= i)
        {
            cout << "* ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}