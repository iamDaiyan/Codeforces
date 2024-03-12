#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev = 0;
    int current;
    int group = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current != prev)
        {
            group++;
        }
        prev = current;
    }
    cout << group;
    return 0;
}