// Let's use c-strings (char array) to solve this problem
#include<iostream>
#include <string.h>
using namespace std;

int main() {
  char a[21], b[21];
  cin >> a >> b;
  int len_a = strlen(a), len_b = strlen(b);
  int len = min(len_a, len_b);
  for (int i = 0; i < len; i++) {
    // if there is a mismatch in a char, then just return the minimum one
    if (a[i] < b[i]) {
      cout << a << '\n';
      return 0;
    }
    else if (a[i] > b[i]) {
      cout << b << '\n';
      return 0;
    }
  }
  // everything is equal in the first `len` characters
  // so now check which one has minimum length
  if (len_a <= len_b) {
    cout << a << '\n';
  }
  else {
    cout << b << '\n';
  }
  return 0;
}