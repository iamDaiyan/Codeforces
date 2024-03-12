// #include <iostream>
// using namespace std;

// int main()
// {
//     // input
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // main
//     int current;
//     int neighbour = 0;
//     int skipper;
//     bool done = false;
//     for (int i = 0; i < n - 1; i++)
//     {
//         done = false;
//         current = arr[i];
//         for (int j = i + 1; arr[j] == current; j++)
//         {
//             neighbour++;
//             skipper = j;
//             done = true;
//         }
//         if (done = true)
//         {
//             i = i + skipper;
//         }
//     }
//     cout << neighbour;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        j = i;
        while (s[j] == s[j + 1])
        {
            if (j == n - 1)
            {
                j = 0;
            }
            count++;
            j++;
        }
    }
}