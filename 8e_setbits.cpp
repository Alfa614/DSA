#include <iostream>
using namespace std;

int setbits(int n)
{
    int ones = 0, digit;
    while (n != 0)
    {
        if (n & 1)
            ones++;
        n = n >> 1;
    }
    return ones;
}

int main()
{

    int a, b, total;
    cout << "Enter the two digits a and b: ";
    cin >> a >> b;

    total = setbits(a) + setbits(b);
    cout << "The total number of setbits in a and b are " << total;
    cout << endl;

    return 0;
}