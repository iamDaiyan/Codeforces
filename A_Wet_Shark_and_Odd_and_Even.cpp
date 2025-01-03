#include <bits/stdc++.h>
using namespace std;

int checker(int sum, int arr[], int n)
{
    int culprit = INT_MAX;
    if (sum % 2 == 0)
    {
        return sum;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] < culprit)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // input taken

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    } // got the sum of all the numbers

    int odd_nums = 0;
    int odd[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[odd_nums] = arr[i];
            odd_nums++;
        }
    }

    // debugging
    for (int i = 0; i < n; i++)
    {
        cout << odd[i] << endl;
    }
}