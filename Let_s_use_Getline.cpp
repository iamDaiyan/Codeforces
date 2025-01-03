#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int size = s.length();
    for (int i = 0; s[i] != '\\'; i++)
    {
        cout << s[i];
    }
    return 0;
}