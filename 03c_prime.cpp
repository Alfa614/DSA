#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;
    int i = n - 1;

    while (i != 2)
    {
        if (n % i == 0)
            prime = false;
        i--;
    }

    prime ? cout << "Prime number" : cout << "Not Prime";

    return 0;
}