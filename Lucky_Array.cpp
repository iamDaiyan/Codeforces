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

    // find the min number
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    // count the occurance
    int occurance = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            occurance++;
        }
    }
    if (occurance % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }

    return 0;
}