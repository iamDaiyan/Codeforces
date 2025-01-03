#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int x = 0; x < m; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cin >> a[x][y];
        }
    }

    int x, y;
    cin >> x >> y; //x = row y = col
    if (a[x][y-1]=='x')
    {
        /* code */
    }
    

    // for (int x = 0; x < m; x++)
    // {
    //     for (int y = 0; y < n; y++)
    //     {
    //         cout << a[x][y] << " ";
    //     }
    //     cout << endl;
    // }
}