#include <ctype.h>
#include <stdio.h>

int main() {
  char ch;
  int count;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
      }
  }
  printf("Your sentence contains %d vowels.\n", count);

  return 0;
}