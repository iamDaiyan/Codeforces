#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool match = false;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                match = true;
            }
        }

        if (match == false)
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
    return 0;
}