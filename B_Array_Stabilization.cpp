#include <bits/stdc++.h>

using namespace std;

int Max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int maxi(int a[], int n, int i)
{
    for (int j = i; j < n; j++)
    {
        if (j == n - 1)
        {
            a[j] = INT_MIN;
        }
        else
        {

            a[j] = a[j + 1];
        }
    }
    return Max(a, n);
}

int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int mini(int a[], int n, int i)
{
    for (int j = i; j < n; j++)
    {
        if (j == n - 1)
        {
            a[j] = INT_MAX;
        }
        else
        {

            a[j] = a[j + 1];
        }
    }
    return Min(a, n);
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ins;

    int INS = Max(a, n) - Min(a, n);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ins = maxi(a, n, i) - mini(a, n, i);
        if (ins < ans)
        {
            ans = ins;
        }
    }

    cout << ans;

    return 0;
}
