#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int ans = 0;
    int n, digit;
    cout << "Enter your number: ";
    cin >> n;

    while (n != 0)
    {
        digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    if (ans < INT32_MIN / 10 || ans > INT32_MAX / 10)
        cout << " 0 ";
    else
        cout << ans;

    return 0;
}