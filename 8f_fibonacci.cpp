#include <iostream>
using namespace std;

int fibonacci(int a)
{
    int fib;
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    fib = fibonacci(a - 1) + fibonacci(a - 2);
    return fib;
}

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << fibonacci(n - 1) << endl;

    return 0;
}