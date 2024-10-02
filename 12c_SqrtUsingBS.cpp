#include <iostream>
using namespace std;

int sqrtBS(int n)
{
    int s = 0, e = n - 1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return s - 1;
}

double precision(int n, int precisionCount, int floored)
{
    double ans = floored;
    double factor = 1;
    for (int i = 0; i < precisionCount; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Square root of this number is: " << precision(n, 5, sqrtBS(n));

    return 0;
}