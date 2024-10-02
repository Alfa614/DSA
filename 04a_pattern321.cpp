#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 3)
    {
        int j = 3;
        while (j > 0)
        {
            cout << " " << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}