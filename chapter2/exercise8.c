#include <stdio.h>

int main()
{
    double loan;
    double interestRate;
    double monthlyPayment;
    double remain1, remain2, remain3;
    
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);

    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%lf", &monthlyPayment);
    
    // Convert interest rate into percent
    interestRate = (interestRate / 100) / 12;

    // Calculate the remain after decrease the monthly payment and increase the interest rate 
    remain1 = loan - monthlyPayment + interestRate * loan;
    printf("Balance remaining after first payment: $%.2lf\n", remain1);
    
    remain2 = remain1 - monthlyPayment + interestRate * remain1;
    printf("Balance remaining after first payment: $%.2lf\n", remain2);

    remain3 = remain2 - monthlyPayment + interestRate * remain2;
    printf("Balance remaining after first payment: $%.2lf\n", remain3);

    return 0;
}
