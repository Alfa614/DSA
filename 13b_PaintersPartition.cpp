#include <iostream>
using namespace std;

bool isPossilbe(int arr[], int n, int m, int mid, bool elementgreater)
{
    int sum = 0, painters = 1;
    for (int i = 0; i < n; i++)
    {
        if (mid >= (sum + arr[i]))
        {
            sum += arr[i];
        }
        else
        {
            painters++;
            if (painters > m || arr[i] > mid)
            {
                if (arr[i] > mid)
                {
                    elementgreater = true;
                }
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int paintersPartition(int arr[], int n, int m)
{
    int Totalsum = 0;
    bool elementgreater = false;
    for (int i = 0; i < n; i++)
    {
        Totalsum += arr[i];
    }
    int s = 0, e = Totalsum, ans = -1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (isPossilbe(arr, n, m, mid, elementgreater))
        {
            e = mid - 1;
            ans = mid;
        }
        else
        {
            if (elementgreater)
            {
                return s;
            }
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n, arr[50], m;
    cout << "size:";
    cin >> n;
    cout << "elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of painters: ";
    cin >> m;

    cout << "Minimum time: " << paintersPartition(arr, n, m);

    return 0;
}