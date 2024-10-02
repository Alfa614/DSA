#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i = 0;
    bool powerOfTwo = false;
    cout << "Enter the number: ";
    cin >> n;

    while (i < 31)
    {
        if (n == pow(2, i))
            powerOfTwo = true;
        i++;
    }

    powerOfTwo ? cout << "Yes, this number is a power of two" : cout << "No this number is not a power of two";
    return 0;
}