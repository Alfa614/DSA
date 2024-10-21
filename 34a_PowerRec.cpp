#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b & 1)
    {
        // odd
        return a * power(a, b / 2) * power(a, b / 2);
    }
    else
    {
        // even
        return power(a, b / 2) * power(a, b / 2);
    }
}

int main()
{

    cout << power(2, 3);

    return 0;
}