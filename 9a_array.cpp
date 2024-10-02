#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int array[50];

    fill_n(array, 50, 4);

    for (int i = 0; i < 50; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}