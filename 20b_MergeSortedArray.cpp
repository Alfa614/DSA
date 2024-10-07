#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArray(vector<int> a, vector<int> b)
{
    int n = 0, i = 0, j = 0;
    vector<int> c;
    while (i < a.size() || j < b.size())
    {
        if (a[i] == 0)
        {
            i++;
            continue;
        }
        if (b[j] == 0)
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }
    return c;
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
    vector<int> a, b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(0);

    b.push_back(2);
    b.push_back(5);
    b.push_back(6);
    b.push_back(0);

    cout << "Merged Sorted Array is: " << endl;
    printVector(mergeSortedArray(a, b));

    return 0;
}