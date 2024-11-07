#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string> &answer, string *mapper)
{
    if (index >= digits.length())
    {
        answer.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    for (int j = 0; j < mapper[number].length(); j++)
    {
        output.push_back(mapper[number][j]);
        solve(digits, output, index + 1, answer, mapper);
        output.pop_back();
    }
}

vector<string> keypad(string digits)
{
    int i = 0;
    string mapper[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "qrs", "tuv", "wxyz"};
    string output;
    vector<string> ans;
    solve(digits, output, i, ans, mapper);
    return ans;
}

void printvec(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
}

int main()
{

    printvec(keypad("23"));

    return 0;
}