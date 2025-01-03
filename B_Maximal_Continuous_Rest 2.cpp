#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int streak = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 && a[i] == 1 && a[0] == 1)
        {
            streak++;
        }
        if (a[i] == 1)
        {
            streak++;
        }
        else
        {
            streak = 0;
        }
        if (streak > ans)
        {
            ans = streak;
        }
    }

    cout << ans;
}