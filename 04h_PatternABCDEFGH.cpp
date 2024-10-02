#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
            ch++;
        }

        cout << endl;
        i++;
    }

    return 0;
}