#include <bits/stdc++.h>
using namespace std;

string R(string n)
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < keyboard.size(); j++)
        {
            if (n[i] == keyboard[j])
            {
                n[i] = keyboard[j + 1];
                break;
            }
        }
    }
    return n;
}

string L(string n)
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < keyboard.size(); j++)
        {
            if (n[i] == keyboard[j])
            {
                n[i] = keyboard[j - 1];
                break;
            }
        }
    }
    return n;
}

int main()
{
    char command;
    cin >> command;
    string s;
    cin >> s;

    if (command == 'R')
    {
        cout << L(s);
    }
    else
    {
        cout << R(s);
    }

    return 0;
}