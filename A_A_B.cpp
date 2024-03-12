#include <iostream>
using namespace std;
void sum()
{
    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }

    int sum = arr[0] + arr[1];
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum();
        cout<<endl;
    }
}