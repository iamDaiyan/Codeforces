#include <iostream>
using namespace std;

int main()
{
    float f;
    cin >> f;

    f *= 10;
    int i = f;
    if (i % 10 < 5)
    {
        cout << i / 10;
    }
    else
    {
        cout << (i / 10) + 1;
    }

    return 0;
}