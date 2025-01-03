#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    bool prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            return false;
        }
    }
    return true;
}
bool is_almost_prime(int n)
{
    int prime = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (is_prime(i) == true)
            {
                prime++;
            }
        }
    }

    if (prime == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int k = 1; k <= n; k++)
    {
        if (is_almost_prime(k) == true)
            ans++;
    }

    cout << ans;
    return 0;
}