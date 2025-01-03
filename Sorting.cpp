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
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = 0;
        int MIN = INT_MAX;
        for (int j = 0; j < n; j++)
        {

            if (a[j] < MIN && a[j] > curr)
            {
                MIN = a[j];
            }
            curr = MIN;
        }

        ans[i] = MIN;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
}
