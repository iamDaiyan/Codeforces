#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        int ans = INT_MIN;
        for (int l = 0; l < n; l++)
        {
            int MAX = INT_MIN;
            int MIN = INT_MAX;
            for (int r = l + 1; r < n; r++)
            {
                MAX = max(MAX, a[r]);
                MIN = min(MIN, a[r]);
            }
            int product = MAX * MIN;
            if (product > ans)
            {
                ans = product;
            }
        }

        cout << ans << endl;
    }

    return 0;
}