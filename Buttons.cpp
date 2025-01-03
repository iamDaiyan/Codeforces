#include <iostream>
using namespace std;

int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    if (a > b)
    {
        ans += a;
        a -= 1;
    }
    else
    {
        ans += b;
        b -= 1;
    }

    // next one
    if (a > b)
    {
        ans += a;
    }
    else
    {
        ans += b;
    }

    cout << ans;
}