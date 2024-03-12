#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

int main()
{
    // taking input
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }

    bubbleSort(a, n); // Now a is sorted and arr is unsorted


 bool matched = true;
    for (int i = 0; i < n; i++)
    {
        matched = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]!=a[j])
            {
                matched = false;
            }

        }
        if (matched==true)
        {
            cout<<i;
            return 0;
        }
        

        a[i]=max(0,a[i]-1);
    }
}