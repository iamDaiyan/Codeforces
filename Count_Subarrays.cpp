#include <bits/stdc++.h>
using namespace std;

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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool increasing = true;
                for (int k = i; k < j; k++)
                {
                    if (a[k] > a[k + 1])
                    {
                        increasing = false;
                        break;
                    }
                } // subarray found
                if (increasing == true)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}