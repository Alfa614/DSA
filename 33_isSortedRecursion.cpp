#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;

    bool ans = isSorted(arr + 1, size - 1);

    return ans;
}

int main()
{
    int arr[5] = {2, 2, 2, 2, 2};

    cout << isSorted(arr, 5) << endl;

    return 0;
}