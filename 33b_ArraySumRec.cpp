#include <iostream>
using namespace std;

int sumArr(int *arr, int size)
{
    if (size == 1)
        return arr[0];
    if (size == 0)
        return 0;

    return (arr[0] + sumArr(arr + 1, size - 1));
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};

    cout << sumArr(arr, 5) << endl;

    return 0;
}