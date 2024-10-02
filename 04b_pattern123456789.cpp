#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 1;
    while (i <= 3)
    {
        int k = 1;
        while (k <= 3)
        {
            cout << " " << j;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}