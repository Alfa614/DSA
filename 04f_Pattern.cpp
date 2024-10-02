#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter number of rows: ";
    cin >> n;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        i++;
        cout << endl;
    }

    return 0;
}