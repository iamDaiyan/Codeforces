#include<iostream>
#include<string.h>
using namespace std;

const int N = 1e5 + 9;
char number_as_string[N];
int main() {
  // as the number is at most 10^100000 so the number can have 100000 digits!
  // so we can't store it in int or long long
  // we have to read it as a string
  cin >> number_as_string;
  int len = strlen(number_as_string);
  // edge case: if the length is already 1 then we don't have to perform any spell
  if (len == 1) {
    cout << 0 << '\n';
    return 0;
  }

  // now we will have to convert it to its sum of digits
  // but the funny thing is that the sum of digits can be stored in int
  // as in the worst case every digit is 9, and sum of 100000 9s = 999999
  int sum_of_digits = 0;
  for (int i = 0; i < len; i++) {
    sum_of_digits += number_as_string[i] - '0';
  }
  int spell_count = 1; // we just performed one spell

  // now we can perform the spells as long as we don't hit only one digit number
  int current_number = sum_of_digits;

  while (current_number > 9) { // it has more than one digit
    int sum_of_digits = 0;
    while (current_number > 0) {
      int last_digit = current_number % 10;
      sum_of_digits += last_digit;
      int number_without_last_digit = current_number / 10;
      current_number = number_without_last_digit;
    }
    // replace the number with its sum of digits and increment the spell count
    current_number = sum_of_digits;
    spell_count++;
  }
  cout << spell_count << '\n';
  return 0;
}