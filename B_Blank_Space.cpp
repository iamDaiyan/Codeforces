#include <iostream>
using namespace std;

int checker(int n, int arr[])
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (count > max)
        {
            max = count;
        }
        if (arr[i] == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
int main()
{
    int t;
    cin >> t;

    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << checker(n, arr) << endl;
    }
}