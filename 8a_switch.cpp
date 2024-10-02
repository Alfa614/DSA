#include <iostream>
using namespace std;

int main()
{
    int n, i = 3;
    while (i > 0)
    {
        cout << "Enter the number: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Continue!!!" << endl;
            continue;
        case 2:
            cout << "It's two" << endl;
            break;
        default:
            cout << "Its neither 1 nor 2" << endl;
            break;
        }
        i--;
    }

    return 0;
}