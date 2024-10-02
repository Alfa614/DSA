#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number of rows: ";
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}