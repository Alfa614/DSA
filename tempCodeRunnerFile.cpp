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
    vector<int> c;
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0)
    {
        // Sum calculate karna:
        int sum;
        if (i <= 0)
            sum = b[j] + carry;
        else if (j <= 0)
            sum = a[i] + carry;
        else
            sum = a[i] + b[j] + carry;

        // Sum ko c mein insert karna:
        if (sum > 9)
        {
            c.push_back(sum % 10);
            i--;
            j--;
            carry = 1;
        }
        else
        {
            c.push_back(sum);
            carry = 0;
        }
    }
    return c;
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