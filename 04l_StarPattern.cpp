#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    while (i <= n)
    {
        int j = n - i + 1;
        while (j > 0)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}