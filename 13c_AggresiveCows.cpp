#include <iostream>
#include <algorithm>
using namespace std;

int min(int stall[], int n)
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (stall[i] < min)
            min = stall[i];
    }
    return min;
}
int max(int stall[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (stall[i] > max)
            max = stall[i];
    }
    return max;
}

bool isPossible(int stall[], int n, int m, int mid)
{
    int count = 1;
    int lastpos = stall[0];
    for (int i = 0; i < n; i++)
    {
        if ((stall[i] - lastpos) >= mid)
        {
            count++;
            if (count == m)
            {
                return true;
            }
            lastpos = stall[i];
        }
    }
    return false;
}

int AggresiveCows(int stall[], int n, int m)
{
    sort(stall, stall + n);
    int s = 0, ans = -1;
    int e = max(stall, n) - min(stall, n);
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (isPossible(stall, n, m, mid))
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int n, stall[50], m;
    cout << "Enter the number of stalls: ";
    cin >> n;
    cout << "Enter the stalls: ";
    for (int i = 0; i < n; i++)
    {
        cin >> stall[i];
    }
    cout << "Enter the number of Aggresive Cows: ";
    cin >> m;

    cout << "Largest minimum distance between these cows is: " << AggresiveCows(stall, n, m);
    return 0;
}