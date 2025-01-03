#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n[N];
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += n[i];
    }
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if ((sum - n[i]) % 2 == 0)
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}