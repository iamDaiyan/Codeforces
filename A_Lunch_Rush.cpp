#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int f, t;
    int joy;
    int maxjoy = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }
        else
        {
            joy = f;
        }

        if (joy > maxjoy)
        {
            maxjoy = joy;
        }
    }

    cout<<maxjoy;
}