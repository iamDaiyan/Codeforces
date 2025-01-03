#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int orange[n];
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
    }
    int current = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (orange[i] > b)
        {
            continue;
        }

        current = current + orange[i];

        if (current > d)
        {
            current = 0;
            ans++;
        }
    }
    cout << ans;
}