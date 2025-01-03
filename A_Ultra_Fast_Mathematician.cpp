#include <bits/stdc++.h>
using namespace std;

int digits(int n)
{
    return floor(log10(n) + 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int digit;
    digit = digits(a);
    int ans[digit];

    for (int i = 1; i <= digit; i++)
    {
        if (a % 10 == b % 10)
        {
            ans[digit - i] = 0;
        }
        else
        {
            ans[digit - i] = 1;
        }
        a /= 10;
        b /= 10;
    }
    for (int i = 0; i < digit; i++)
    {
        cout << ans[i];
    }

    return 0;
}