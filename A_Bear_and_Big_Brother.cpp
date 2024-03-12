#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int years;
    cin >> a >> b;
    for (int i = 0; a <= b; i++)
    {
        a = 3 * a;
        b = 2 * b;
        years = i;
    }
    cout << years+1;
}