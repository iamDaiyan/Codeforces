#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int MIN = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sum = arr[i - 1] + arr[j - 1] + j - i;
                //cout << "i = " << i << " j = " << j << " a[j] = " << arr[j - 1] << " a[i] = " << arr[i - 1] << " sum = " << sum << endl;
                if (sum < MIN)
                {
                    MIN = sum;
                }
            }
        }

        cout << MIN << endl;
    }
    return 0;
}