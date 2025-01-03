#include <bits/stdc++.h>
using namespace std;

void flipAndAdjacent(int arr[3][3], int row, int col)
{
    // Check for valid indices
    if (row < 0 || row >= 3 || col < 0 || col >= 3)
    {
        return;
    }

    // Flip current element
    arr[row][col] = !arr[row][col]; // Flip using logical NOT

    // Flip adjacent elements (if within bounds)
    if (row > 0)
    {
        flipAndAdjacent(arr, row - 1, col);
    }
    if (row < 3 - 1)
    {
        flipAndAdjacent(arr, row + 1, col);
    }
    if (col > 0)
    {
        flipAndAdjacent(arr, row, col - 1);
    }
    if (col < 3 - 1)
    {
        flipAndAdjacent(arr, row, col + 1);
    }
}

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                // ignore
                continue;
            }
            else
            {
                flipAndAdjacent(ans, i, j);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}