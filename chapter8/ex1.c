// Modify the repdigit.c program of Section 8.1 so that it shows which digits
// (if any) were repeated: Enter a number: 939577 Repeated digit(s): 7 9

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool digit_seen[10] = {false};

  int digit_store[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);


  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit])
      digit_store[digit] = digit;
    digit_seen[digit] = true;
    n /= 10;
  }

  printf("Repeated digit(s): ");
  for (int i = 0; i < 10; i++) {
    if (digit_store[i] != 0)
      printf("%d ", digit_store[i]);
    }

  return 0;
}