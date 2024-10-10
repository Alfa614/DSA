#include <iostream>
using namespace std;

string shrinked(string s)
{
    string ns;
    int i = 0;
    while (i < s.length())
    {
        char ch = s[i];
        int count = 1;
        ns.push_back(ch);
        if ((i + 1) != s.length() && s[i + 1] == s[i])
        {
            while (s[i + 1] == s[i])
            {
                count++;
                i++;
            }

            ns.push_back('0' + count);
        }
        i++;
    }
    return ns;
}

int main()
{
    string s;

    cout << "Enter the string: ";
    cin >> s;

    cout << shrinked(s);

    return 0;
}