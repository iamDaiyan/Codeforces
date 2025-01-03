#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // a = ebony units
    // b = ivory units
    // c = total damage
    // A = ebony times
    // B = ivory times

    for (int A = 0;; A++)
    {
        if (a * A > c)
        {
            break;
        }
        for (int B = 0;; B++)
        {
             if (b * B > c)
            {
                break;
            }

            if (a*A+b*B == c)
            {
                cout<<"Yes";
                return 0;
            }
            
            if ((a*A+b*B)>c)
            {
                break;
            }
            
            
        }
    }

    cout << "No";
    return 0;
}