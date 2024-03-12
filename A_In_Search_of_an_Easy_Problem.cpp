#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool hard = false;
    int response;
    for (int i = 0; i < n; i++)
    {
        cin >> response;
        if (response == 1)
        {
            hard = true;
        }
    }

    if (hard == true)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
}