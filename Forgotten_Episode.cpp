#include <bits/stdc++.h>
using namespace std;
int maximum(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    int MAX = maximum(a, n - 1);
    for (int i = 1; i <= MAX; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1; j++)
        {

            if (a[j] == i)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << i;
            return 0;
        }
    }
}