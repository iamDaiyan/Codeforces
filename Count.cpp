#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;

    // char s[1000000];
    // cin >> s;
    // int size = strlen(s);
    // int sum = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     sum += s[i]-'0';
    // }

    // cout << sum;
    // return 0;
}