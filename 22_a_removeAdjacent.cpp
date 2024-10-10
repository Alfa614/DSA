#include <iostream>
using namespace std;

bool checkDupli(string s)
{
    int i = 1;
    while (i < s.length())
    {
        if (s[i - 1] == s[i])
        {
            return true;
        }
        i++;
    }
    return false;
}

string removeDupli(string s)
{
    string ns;
    while (checkDupli(s))
    {
        int i = 1;
        while (i < s.length())
        {
            if (s[i - 1] == s[i])
            {
                continue;
            }
            else if (i != 1 && (i + 1) < s.length() && s[i] == s[i + 1])
                continue;
            else
            {
                ns.push_back(s[i]);
            }
            i++;
        }
    }
    return ns;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << removeDupli(s);

    return 0;
}