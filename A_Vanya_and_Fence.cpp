#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int ph; // person's height
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ph;
        if (ph > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    cout << width;
    return 0;
}
