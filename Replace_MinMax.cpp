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

    // find MAX
    int MAX = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > MAX)
        {
            MAX = a[i];
        }
    }
    // find MIN
    int MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < MIN)
        {
            MIN = a[i];
        }
    }

    // swap
    for (int i = 0; i < n; i++)
    {
        if (a[i] == MAX)
        {
            a[i] = MIN;
        }
        else if (a[i] == MIN)
        {
            a[i] = MAX;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}