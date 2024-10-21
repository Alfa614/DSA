#include <iostream>
using namespace std;

void printArr(int *arr, int s, int e)
{
    for (int i = s; i <= e; i++)
        cout << " " << arr[i];
    cout << endl;
}

void Merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    k = s;
    int i = 0, j = 0;

    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
            arr[k++] = first[i++];
        else
            arr[k++] = second[j++];
    }
    while (i < len1)
    {
        arr[k++] = first[i++];
    }
    while (j < len2)
    {
        arr[k++] = second[j++];
    }

    delete[] first;
    delete[] second;
}

void MergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
}

int main()
{
    int arr[5] = {13, 4, 8, 27, 19};

    MergeSort(arr, 0, 4);
    printArr(arr, 0, 4);
    return 0;
}