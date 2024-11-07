#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> number, int index, vector<vector<int>> &ans)
{

    if (index >= number.size())
    {
        ans.push_back(number);
        return;
    }
    for (int i = index; i < number.size(); i++)
    {

        swap(number[index], number[i]);
        solve(number, index + 1, ans);
        swap(number[index], number[i]);
    }
}
void printvec(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "}, ";
    }
}

int main()
{
    vector<vector<int>> answer;
    vector<int> vec = {1, 2};
    solve(vec, 0, answer);
    printvec(answer);
}