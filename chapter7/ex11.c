// Write a program that takes a first name and last name entered by the user and
// displays the last name, a comma, and the first initial, followed by a period:
// Enter a first and last name: Lloyd Fosdick
// Fosdick, L.
#include <ctype.h>
#include <stdio.h>

int main(void) {

  char ch;
  char init_value;

  printf("Enter a first and last name: ");

  // Bỏ qua khoảng trắng đầu (nếu có)
  while (isspace(ch = getchar()))
    ;

  init_value = ch;

  while ((ch = getchar()) != ' ')
    ;

  // Bỏ qua khoảng trắng đầu (nếu có)
  while (isspace(ch = getchar()))
    ;

  do {

    putchar(ch);
  } while ((ch = getchar()) != '\n');

  printf(", %c.", ch);

  return 0;
}