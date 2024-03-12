#include <iostream>
using namespace std;

int code()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        code();
        cout << endl;
    }
    return 0;
}