#include <iostream>
using namespace std;

int AP(int n)
{
    return (3 * n + 7);
}

int main()
{

    int n, i;
    cout << "Enter the value of \"n\" for the AP(3n+7): ";
    cin >> n;

    cout << AP(n);

    return 0;
}