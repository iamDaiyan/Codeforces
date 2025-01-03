#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x;
    if (n > m)
    {
        x = m;
    }
    else
    {
        x = n;
    }

    if (x % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}