#include <iostream>
#include <cmath>
using namespace std;

int length(int a)
{
    string num = to_string(a);
    return num.size();
}
int main()
{
    int a, b;
    cin >> a >> b;
    int size = length(a);
    for (int i = 0; i < size; i++)
    {
        if ((b % pow(10, size - i)) != (a % pow(10, size - i)))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }

        a /= 10;
        b /= 10;
    }
}