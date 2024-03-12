#include <iostream>
using namespace std;

int main()
{
    int capacity = 0;
    int stops;
    cin >> stops;
    int a;
    int b;
    int onboard = 0;
    for (int i = 0; i < stops; i++)
    {
        cin >> a >> b;

        onboard = onboard + b - a;
        if (capacity < onboard)
        {
            capacity = onboard;
        }
    }
    cout << capacity;
    return 0;
}