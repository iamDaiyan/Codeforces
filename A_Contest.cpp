#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int Misha = ((3 * a / 10) * a) - ((a / 250) * c);
    int Vasya = ((3 * b / 10) * b) - ((b / 250) * d);

    if (Misha > Vasya)
    {
        cout << "Misha";
    }
    else if (Vasya > Misha)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }

    return 0;
}