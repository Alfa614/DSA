#include <iostream>
#include <vector>
using namespace std;

vector<string> solve(string str, int index, vector<string> &ans)
{

    if (index >= str.length())
    {
        ans.push_back(str);
        return ans;
    }
    for (int i = index; i < str.length(); i++)
    {

        swap(str[index], str[i]);
        solve(str, index + 1, ans);
        swap(str[index], str[i]);
    }
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
    string str = "abc";
    vector<string> answer;

    printvec(solve("abc", 0, answer));
}