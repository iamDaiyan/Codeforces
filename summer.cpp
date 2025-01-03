#include <bits/stdc++.h>
using namespace std;
#define ll long long

int summer(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + summer(n - 1);
}

int main()
{
    int n = 100;
    cout << summer(n) << "\n";
    return 0;
}