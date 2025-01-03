#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int size = s.length();
    // for (int j = 0; j < size; j++)
    // {
    //     int curr = 0;
    //     for (int i = ptr; s[i] == s[i + 1]; i++)
    //     {
    //         ptr = i;
    //         curr++;
    //         cout << "ptr: " << ptr << " " << "curr: " << curr << endl;
    //     }
    //     cout << "Ultimate result" << endl;
    //     cout << s[ptr] << " : " << curr + 1 << endl;
    //     ptr += 2;
    // }
    int curr = 0;
    int ptr = 0;
    for (int i = 0; s[i] == s[i + 1]; i++)
    {
        curr++;
        ptr = i;
    }
    cout << s[ptr] << " : " << curr + 1;
    return 0;
}