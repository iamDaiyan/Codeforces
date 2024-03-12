#include <iostream>
using namespace std;

void checker(int a, int b, int c)
{
    if (a != b && a != c)
    {
        cout << a;
    }
    else if (b != a && b != c)
    {
        cout << b;
    }
    else if (c != a && c != b)
    {
        cout << c;
    }
}
int main()
{
    int t;
    cin >> t;
    int a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        checker(a, b, c);
        cout<<endl;
    }
}