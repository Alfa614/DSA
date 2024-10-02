#include <iostream>
using namespace std;

int main()
{
    int n, divisor = 100, hundreds = 0, fifties = 0, twenties = 0, ones = 0;
    cout << "Enter the amount: ";
    cin >> n;

    while (n > 0)
    {
        switch (divisor)
        {
        case 100:
            hundreds = n / 100;
            n = n - (hundreds * 100);
            divisor = 50;
            cout << hundreds << " Hundreds, ";
            break;

        case 50:
            fifties = n / 50;

            n = n - (fifties * 50);
            divisor = 20;
            cout << fifties << " fifties, ";

            break;
        case 20:
            twenties = n / 20;
            divisor = 1;
            n = n - (twenties * 20);
            cout << twenties << " twenties, ";
            break;

        case 1:
            ones = n;
            cout << ones << " ones.";
            n = 0;
            break;

        default:
            cout << "Enter valid amount!!";
        }
    }

    return 0;
}