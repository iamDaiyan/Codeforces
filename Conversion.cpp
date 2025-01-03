#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
            continue;
        }

        if (s[i] >= 65 && s[i] < 97) // s[i] is uppercase
        {
            s[i] += 32;
        }
        else
        {
            s[i] -= 32;
        }
    }

    cout << s;

    // char A = 'A'; 65
    // char a = 'a'; 97
    // cout << (int)A << " " << (int)a;
}