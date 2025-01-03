#include <bits/stdc++.h>
using namespace std;

int main()
{
    int black;
    int white;
    char arr[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'Q')
            {
                white = white + 9;
            }
            else if (arr[i][j] == 'R')
            {
                white = white + 3;
            }
            else if (arr[i][j] == 'B' || arr[i][j] == 'N')
            {
                white = white + 2;
            }
            else if (arr[i][j] == 'P')
            {
                white = white + 1;
            }
            else

                if (arr[i][j] == 'q')
            {
                black = black + 9;
            }
            else if (arr[i][j] == 'r')
            {
                black = black + 3;
            }
            else if (arr[i][j] == 'b' || arr[i][j] == 'n')
            {
                black = black + 2;
            }
            else if (arr[i][j] == 'p')
            {
                black = black + 1;
            }
        }
    }

    if (white > black)
    {
        cout << "White";
    }
    else if (white < black)
    {
        cout << "Black";
    }
    else
    {
        cout << "Draw";
    }
    return 0;
}