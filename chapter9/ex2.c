#include <stdio.h>

double case_1(int income) {
  double tax = income * (1.0/100);
  return tax;
}
double case_2(int income) {
  int over_income = income - 750;
  double tax = 7.50 + (2.0/100) * over_income;
  return tax;
}
double case_3(int income) {
  int over_income = income - 2250;
  double tax = 37.50 + (3.0/100) * over_income;
  return tax;
}
double case_4(int income) {
  int over_income = income - 3750;
  double tax = 82.50 + (4.0/100) * over_income;
  return tax;
}
double case_5(int income) {
  int over_income = income - 750;
  double tax = 142.50 + (5.0/100) * over_income;
  return tax;
}
double case_6(int income) {
  int over_income = income - 7000;
  double tax = 230.00 + (6.0/100) * over_income;
  return tax;
}


int main(void) {

  double (*ptr[6])(int) = {case_1, case_2, case_3, case_4, case_5, case_6};
  int income;
  double tax;
  printf("Enter your income: ");
  scanf("%d", &income);

  if (income <= 750)
    tax = case_1(income);
  else if (income <= 2250)
    tax = case_2(income);
  else if (income <= 3750)
    tax = case_3(income);
  else if (income <= 5250)
    tax = case_4(income);
  else if (income <= 7000)
    tax = case_5(income);
  else
    tax= case_6(income);

  printf("Your tax is: %.2lf", tax);



return 0;
    }