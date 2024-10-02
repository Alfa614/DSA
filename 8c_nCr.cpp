#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact;
    if (n == 1 || n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
int nCr(int n, int r)
{
    cout << "Factorial of n is " << factorial(n) << endl;
    cout << "r! is " << factorial(r) << endl;
    cout << "n-r! is " << factorial(n - r) << endl;
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int main()
{
    int n, r, ans;

    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "The Combination of " << n << " and " << r << " is: " << nCr(n, r);

    return 0;
}