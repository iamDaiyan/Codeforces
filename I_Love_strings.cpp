#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        int size_S = s.length();
        int size_T = t.length();
        if (size_S < size_T)
        {
            int end = 0;
            for (int i = 0; i < size_S; i++)
            {
                cout << s[i] << t[i];
                end++;
            }

            for (int i = end; i < size_T; i++)
            {
                cout << t[i];
            }
        }
        else if (size_S > size_T)
        {
            int end = 0;
            for (int i = 0; i < size_T; i++)
            {
                cout << s[i] << t[i];
                end++;
            }
            for (int i = end; i < size_S; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            for (int i = 0; i < size_S; i++)
            {
                cout << s[i] << t[i];
            }
        }

        cout << endl;
    }
    return 0;
}