#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; // n = tiles; m = square
    cin >> n >> m;

    if (m % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    int tile[2][2];
    bool tiles;
    for (int k = 0; k < n; k++)
    {
        // input of tiles
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> tile[i][j];
            }
        }

        tiles = true;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (tile[i][j] != tile[j][i])
                {
                    tiles = false;
                }
            }
        }
        if (tiles = true)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}