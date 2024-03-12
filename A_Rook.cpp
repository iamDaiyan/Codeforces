#include <iostream>
using namespace std;
#include <strings.h>

void algo(string pos)
{
    int col = int(pos[0]) - 96;
    int row = int(pos[1] - '0');

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (i == col && j == row)
            {
                continue;
            }
            else if (i == col || j == row)
            {
                cout << char(i + 96) << j << endl;
            }
        }
    }
}
int main()
{
    string pos;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> pos;
        algo(pos);
    }
}