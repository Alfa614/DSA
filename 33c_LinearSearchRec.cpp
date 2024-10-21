#include <iostream>
using namespace std;

bool linearSerach(int *arr, int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSerach(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};

    cout << linearSerach(arr, 5, 9) << endl;

    return 0;
}