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
        int k = i;
        while (j <= i)
        {
            cout << k << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}