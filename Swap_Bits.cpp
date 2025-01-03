#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check_bit(unsigned int n, int k)
{
    if ((n >> k) & 1)
    {
        // set
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        for (int k = 0; k < 32; k += 2)
        {
            int a = check_bit(n, k);
            int b = check_bit(n, k + 1);
            swap(a, b);

            n = n | (a << k + 1);
            n = n | (b << k);
        }

        cout << n << " ";
    }

    return 0;
}