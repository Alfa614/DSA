#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, cmpl, mask, i = 0;
    cout << "Enter your number: ";
    cin >> n;

    // Isme mask create karna padhenga, jitne 5 ke binary bits hai,
    // utne 1's ka mask. Then usko & karna honga complement of n se

    if (n == 0)
    {
        cmpl = 1;
    }
    else
    {
        cmpl = ~n;

        // Therefore, isme n=0 (genuine case) ignored hai, usko alag se
        // if banake likhna padhenga;
        while (n != 0)
        {
            i++;
            n = n >> 1;
        }
        mask = (pow(2, i) - 1);

        cmpl = cmpl & mask;
    }
    cout << "Answer is: " << cmpl;

    return 0;
}