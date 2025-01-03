#include <bits/stdc++.h>
using namespace std;

long long sum(int a[], int n)
{
    long long SUM = 0;
    for (int i = 0; i < n; i++)
    {
        SUM += a[i];
    }

    return SUM;
}
int odd(int a[], int n)
{
    int ODD = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] < ODD)
        {
            ODD = a[i];
        }
    }
    return ODD;
}

int main()
{
    int n;
    cin >> n;
    int a[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ODD = odd(a, n);
    //cout << "Odd = " << ODD << endl;

    long long SUM = sum(a, n);
    //cout << "SUM = " << SUM << endl;

    while (SUM % 2 != 0)
    {
        SUM -= ODD;
    }

    cout << SUM;

    return 0;
}