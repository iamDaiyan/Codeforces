#include <iostream>
#include <cmath>
using namespace std;

int digit(int number)
{
    // the function works
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

int ratings(int number)
{

    int digits = digit(number); // 6
    int numA, numB;
    for (int i = 1; i < digits; i++)
    {
        numA = number / pow(10, (digits - i));
        numB = number - (numA * pow(10, (digits - i)));
        if (numA < numB && numA > 0 && numB > 0 && (numB / pow(10, digit(numB) - 1)) != 0)
        {
            cout << numA << " " << numB;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}

int main()
{
    int t;
    cin >> t;

    int cases;

    for (int i = 0; i < t; i++)
    {
        cin >> cases;
        ratings(cases);
        cout << endl;
    }
}