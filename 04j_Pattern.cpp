#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
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