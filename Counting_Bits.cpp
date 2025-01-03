#include <bits/stdc++.h>
using namespace std;
#define ll long long

int count_bits(int n)
{
    int count = 0;
    for (int k = 0; k < 32; k++)
    {
        if (((n >> k) & 1) == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += count_bits(i);
            // cout << count_bits(i) << endl;
        }

        cout << ans << endl;
    }

    return 0;
}