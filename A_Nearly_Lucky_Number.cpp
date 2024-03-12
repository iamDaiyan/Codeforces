#include <iostream>
#include <cmath>
using namespace std;

int digits(long n)
{
    // {
    //     int count = 0;
    //     while (n != 0) {
    //         n = n / 10;
    //         ++count;
    //     }
    //     return count;
    int cnt = 0;
    while (n > 0)
    {
        n /= 10; // looks more logical
        cnt++;
    }
    return cnt;
}
int main()
{
    long n;
    cin >> n;
    int size = digits(n);
    int lucky = 0;
    for (int i = 0; i < size; i++)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            lucky++;
        }
        n = n / 10;
    }
    if (lucky == 4 || lucky == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}