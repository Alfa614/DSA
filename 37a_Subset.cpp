#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> numbers, vector<int> output, int index, vector<vector<int>> &answer)
{
    if (index >= numbers.size())
    {
        answer.push_back(output);
        return;
    }

    // exclude: seedhe aage badh jao
    solve(numbers, output, index + 1, answer);

    // include: pehle output mein index wala element daalo and then aage badho
    int element = numbers[index];
    output.push_back(element);
    solve(numbers, output, index + 1, answer);
}
void print(vector<vector<int>> v)
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
    vector<int> numbers = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> answer;
    int index = 0;

    solve(numbers, output, index, answer);

    print(answer);

    return 0;
}