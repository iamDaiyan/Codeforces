#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.length();
        bool good = false;
        for (int i = 0; i < size - 3; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                good = true;
            }
            else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                good = true;
            }
        }
        if (good = true)
        {
            cout << "Good";
        }
        else
        {
            cout << "Bad";
        }
        cout << endl;
    }
    return 0;
}