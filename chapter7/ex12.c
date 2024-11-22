// Write a program that evaluates an expression:
// Enter an expression: 1+2.5*3
// Value of expression: 10.5
// The operands in the expression are floating-point numbers; the operators are
// +, -, *, and /. The expression is evaluated from left to right (no operator
// takes precedence over any other operator).

#include <stdio.h>
#include <ctype.h>
int main(void) {

  float ans = 0, num;
  char operator;
  float operand;

  printf("Enter an expression: ");
  scanf("%f", &ans);

  while ((operator= getchar()) != '\n') {
    if (isspace(operator))
      continue;

    scanf("%f", &num);
  switch (operator) {
  case '+':
    ans += num;
    break;
  case '-':
    ans -= num;
    break;
  case '*':
    ans *= num;
    break;
  case '/':
    ans /= num;
    break;
  }
  }
  
printf("%.2f", ans);
  return 0;
    }