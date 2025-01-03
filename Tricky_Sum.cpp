#include<iostream>
using namespace std;

/**
Imagine we need to find S = 1 + 2 + 3 + ... + (n - 1) + n
How to find it without using a loop?

Do you remember the formula for this from school?
If not, lets find its formula again!

S  =    1    +    2    +    3    + ... + (n - 1) +    n
S  =    n    + (n - 1) + (n - 2) + ... +    2    +    1  (showing in reverse order)
----------------------------------------------------------
2S = (n + 1) + (n + 1) + (n + 1) + ... + (n + 1) + (n + 1) (sum the first and second equations)

so 2S = (n + 1) * n (as there are n variables in total)
so S = (n + 1) * n / 2
So instead of running a loop we can just use this formula to find the sum from 1 to n. Great!


Note that the powers of twos are 2^0 = 1, 2^1 = 2, 2^2 = 4, 2^3 = 8, 2^4 = 16, 2^5 = 32, ...
But in this problem we have to find P = -1 - 2 + 3 - 4 + 5 + 6 + 7 - 8 + 9 + 10 + ... upto n (only powers of twos have negative sign)

How to do this?

  S   =    1  +   2 + 3 + 4   + 5 + 6 + 7 + 8 + 9 + 10 + ...
  P   =   -1  -   2 + 3 - 4   + 5 + 6 + 7 - 8 + 9 + 10 + ...
----------------------------------------------------------
S - P = 2 * 1 + 2 * 2 + 2 * 4 +          + 2 * 8 + ...       (subtracting the second equation from the first)

So basically,
S - P = 2 * (1 + 2 + 4 + 8 + ....)
S - P = 2 * (sum of powers of 2 that are <= n)

so P = S - 2 * (sum of powers of 2 that are <= n)

We can compute S fast, so we have to compute the sum of powers of 2 that are <= n
But the thing is there aren't that many powers of 2 under n.
There are log2(n) powers of 2 under n. For n = 10^9, there are only 30 powers of 2 uner 10^9.
So we can just loop over them!
**/
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long S = (long long) (n + 1) * n / 2; // typecast to long long so that we don't overflow
    long long sum_of_powers_of_2 = 0;
    for (int i = 1; i <= n; i *= 2) { // traversing through all powers of 2, one is just the double of the previous one
      sum_of_powers_of_2 += i;
    }
    long long P = S - 2 * sum_of_powers_of_2;
    cout << P << '\n';
  }
  return 0;
}

// we can't run a loop n times in this problem thats because n can be as large as 10^9
// and in 1s we can do around 10^8 operations
// so it will take arounf 10^9 / 10^8 = 10s to run a loop n times which is way more than our time limit