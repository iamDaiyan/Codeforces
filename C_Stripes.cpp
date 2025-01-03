#include <bits/stdc++.h>
using namespace std;

void finder(char arr[8][8])
{
    bool x = true;
    bool ans = false;
    for (int i = 0; i < 8; i++)
    {
        x = true;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] != 'R')
            {
                x = false;
                break;
            }
        }
        if (x == true)
        {
            cout << 'R';
            ans = true;
        }
    }
    if (ans = false)
    {
        cout << 'B';
    }

}
int main()
{
    char arr[8][8];
    // int t;
    // for (int k = 0; k < t; k++)
    // {
    //     for (int i = 0; i < 8; i++)
    //     {
    //         for (int j = 0; j < 8; j++)
    //         {
    //             cin >> arr[i][j];
    //         }
    //     }

    //     finder(arr);
    // }

    // return 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    finder(arr);

    return 0;
}