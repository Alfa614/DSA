#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
}
vector<int> sumOfTwoArrays(vector<int> a, vector<int> b)
{
    int i = 0;
}

int main()
{

    vector<int> a, b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);

    b.push_back(6);

    printVector(sumOfTwoArrays(a, b));

    return 0;
}