#include <iostream>
#include <vector>
using namespace std;

int allPrimes(int n)
{
    int count = 0;
    vector<bool> v(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (v[i])
        {
            count++;
            // agar humara number prime hai toh uske jitne bhi multiples
            // hai, unn sabh ko non-prime kardo
            // 2*i se start karte huwe, and on each interation, add i to it
            for (int j = 2 * i; j < n; j = j + i)
            {
                v[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Total number of prime numbers lesser than " << n << " are: " << allPrimes(n);

    return 0;
}