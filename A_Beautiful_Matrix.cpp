#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row;
    int column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] != 0)
            {
                row = i;
                column = j;
            }
        }
    }
    // working
    // int moves = 0;
    // if (row == 2)
    // {
    // }
    // else if (row < 2)
    // {
    //     moves = moves + 2 - row;
    // }
    // else if (row > 2)
    // {
    //     moves = moves + row - 2;
    // }
    int moves = 0;
    switch (row)
    {
    case 0:
        moves = moves + 2;
        break;
    case 1:
        moves++;
        break;
    case 3:
        moves++;
    case 4:
        moves = moves + 2;
    default:
        break;
    }

    switch (column)
    {
    case 0:
        moves = moves + 2;
        break;
    case 1:
        moves++;
        break;
    case 3:
        moves++;
    case 4:
        moves = moves + 2;
    default:
        break;
    }
    cout << moves;
}