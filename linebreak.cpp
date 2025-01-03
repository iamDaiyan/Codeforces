#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int curr = 0;
        int word = 0;
        //cout << "Curr: " << curr << " word: " << word << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Loop ran" << endl;
            char s[10];
            cin >> s;
            //cout << s << endl;
            int size = strlen(s);
            //cout << "size = " << size << endl;
            if (curr + size <= m)
            {
                curr += size;
                word++;
            }
            else
            {
                break;
            }
        }
        //cout << "Curr: " << curr << " word: " << word << endl;
        cout << word << "\n";
        cout << endl;
    }
    return 0;
}