#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your character: ";
    cin >> ch;

    cout << "a = " << int('a') << "     z = " << int('z') << endl;
    cout << "A = " << int('A') << "     Z = " << int('Z') << endl;
    cout << "0 = " << int('0') << "     9 = " << int('9') << endl;

    cout << "ch = " << int(ch) << endl;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Character is numeric";
    }
    else
    {
        cout << "Character is Uppercase";
    }

    return 0;
}