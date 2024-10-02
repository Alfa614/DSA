#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ans = 0, i = 0, n;
    cout << "Enter your number: ";
    cin >> n;

    if (n < 0)
    {
        n = n * (-1);

        while (n != 0)
        {
            int bit = n & 1;
            ans = (ans * 10) + bit;

            n = n >> 1;
            i++;
        }

        ans = ~ans + 1;

        cout << ans;
    }

    return 0;
}