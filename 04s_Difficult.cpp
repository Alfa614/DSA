/*
Enter the number of rows: 5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    while (i <= n)
    {
        int j = 1, k = 1, l = n - i + 1;
        while (j <= (n - i + 1))
        {
            cout << j << " ";
            j++;
        }
        while (k <= (i - 1))
        {
            cout << "* * ";
            k++;
        }
        while (l >= 1)
        {
            cout << l << " ";
            l--;
        }
        cout << endl;
        i++;
    }

    return 0;
}