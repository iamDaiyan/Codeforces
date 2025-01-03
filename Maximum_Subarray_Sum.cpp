#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  long long max_subarray_sum = INT_MIN;
  long long max_subarray_sum_so_far = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    max_subarray_sum_so_far = max((long long)a[i], a[i] + max_subarray_sum_so_far);
    max_subarray_sum = max(max_subarray_sum, max_subarray_sum_so_far);
  }
  cout << max_subarray_sum << '\n';
  return 0;
}