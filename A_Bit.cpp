#include <iostream>
#include <string.h>
#include <strings.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char statements[n * 3];
    int add = 0;
    int minus = 0;
    for (int i = 0; i < n * 3; i++)
    {
        if (statements[i] == '+')
        {
            add++;
        }
        else if (statements[i] == '-')
        {
            minus++;
        }
        else
        {
            continue;
        }
    }
    cout<<add;
    cout<<endl<<minus;
    cout << add / 2 - minus / 2;
}
