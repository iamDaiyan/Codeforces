#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool checker = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {

            checker = true;
        }
    }

    if (checker == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}