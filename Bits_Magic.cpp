#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        int k;
        cin >> n >> k;
        unsigned int NEW;
        if ((n >> k) & 1)
        {
            // set
            NEW = n;
        }
        else
        {
            //not set
            NEW = n | (1u << k);
        }
        cout << NEW << endl;
    }
    return 0;
}