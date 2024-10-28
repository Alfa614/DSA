#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subseq(string str, string output, int index, vector<string> &answer)
{
    if (index >= str.length())
    {
        answer.push_back(output);
        cout << output << " ";
        return;
    }

    // exclude:
    subseq(str, output, index + 1, answer);

    // include:
    char ch = str[index];
    output.push_back(ch);
    subseq(str, output, index + 1, answer);
}

int main()
{
    string s = "And";
    int i = 0;
    vector<string> ans;
    string output = "";

    subseq(s, output, i, ans);

    return 0;
}