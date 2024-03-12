#include <iostream>
using namespace std;

void result(int n)
{
    int counter = 1;
    int alice = 0;
    int bob = 0;
    int cards = 0;
    for (int i = 1; bob + alice < n; i++)
    {
        cards = cards + i;
        if (counter < 2)
        {
            alice = alice + i;
            counter++;
        }
        else if (counter == 3)
        {
            bob = bob + i;
            counter = 0;
        }
        else
        {
            bob = bob + i;
            counter++;
        }
    }
    cout << alice << endl
         << bob;
}
int main()
{
    int t;
    int n;
    // for (int i = 0; i < t; i++)
    // {
    //     cin >> n;
    //     result(n);
    //     cout<<endl;
    // }
    result(10);
}