#include <iostream>
using namespace std;

int bookAllocation(int arr[], int n, int m)
{
    int Totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        Totalsum += arr[i];
    }
    int s = 0, e = Totalsum;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s < e)
    {
        int j = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid <= (sum + arr[i]))
            {
                sum = 0;
                j++;
            }
            sum += arr[i];
        }
        if (j < m)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
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
    cout << "elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of students: ";
    cin >> m;
    cout << "Maximum number of pages allocated to a student: " << bookAllocation(arr, n, m);

    return 0;
}