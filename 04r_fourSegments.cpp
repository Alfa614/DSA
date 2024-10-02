
/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
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
        int j = 1, k = 1, l = 1, m = 1;
        while (j <= (n - i))
        {
            cout << "  ";
            j++;
        }
        while (k <= (i))
        {
            cout << k << " ";
            k++;
        }
        while (l <= (i - 1))
        {
            cout << i - l << " ";
            l++;
        }
        cout << endl;
        i++;
    }

    return 0;
}