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

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int MAX = INT_MIN;
                for (int k = i; k <= j; k++)
                {
                    if (a[k] > MAX)
                    {
                        MAX = a[k];
                    }

                } // max number in a sub array obtained in MAX
                cout << MAX << " ";
            }
        }
        cout << endl;
    }

    return 0;
}