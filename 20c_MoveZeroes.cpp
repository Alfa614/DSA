#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroes(vector<int> v)
{
    int i = 0;

    while (i < v.size())
    {
        if (v[i] == 0)
        {
            int j = i + 1;
            while (v[j] == 0 && j < v.size())
            {
                j++;
            }
            if (j < v.size())
            {
                swap(v[i], v[j]);
            }
        }
        i++;
    }

    return v;
}

void printVector(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
}

int main()
{
    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(0);
    a.push_back(5);
    a.push_back(0);
    a.push_back(6);

    printVector(moveZeroes(a));

    return 0;
}