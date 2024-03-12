#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int counter = 0;
    while (counter != k)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
        counter++;
    }
    cout << n;
    return 0;
}