#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;
    int n = (T + 0.5) / A;
    cout << n * B;
}