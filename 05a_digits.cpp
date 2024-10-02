#include <iostream>
using namespace std;

int main()
{
    int i, n = 234, sum = 0, prod = 1;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n = (n / 10);
    }
    cout << (prod - sum);

    return 0;
}