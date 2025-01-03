#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char statement[3];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> statement[j];
        }
        if (statement[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x;
    return 0;
}