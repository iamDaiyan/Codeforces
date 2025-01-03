#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int primary = 0, secondary = 0;
    // primary
    for (int i = 0; i < n; i++)
    {

        primary += a[i][i];
       // cout << "For i: " << i << " " << i << " primary = " << primary << endl;
    }

    // secondary
    for (int i = n - 1; i >= 0; i--)
    {
        secondary += a[i][n - i - 1];
       // cout << "For i: " << i << " " << n - i - 1 << " secondary = " << secondary << endl;
    }

    if (primary > secondary)
    {
        cout << primary - secondary;
    }
    else if (primary < secondary)
    {
        cout << secondary - primary;
    }
    else
    {
        cout << 0;
    }

    return 0;
}