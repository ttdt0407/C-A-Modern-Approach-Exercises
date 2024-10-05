#include <stdio.h>

int main()
{
    double loan;
    double interestRate;
    double monthlyPayment;
    double remain1, remain2, remain3;
    double excessFunds;
    
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    // Checks condition
    if (loan <= 0)
    {
        printf("Amount of loan is not valid !");
        return 1;
    }

    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);
    // Checks condition
    if (interestRate < 0)
    {
        printf("Interest rate is not valid !");
        return 1;
    }

    printf("Enter monthly payment: ");
    scanf("%lf", &monthlyPayment);
    // Checks condition
    if (monthlyPayment < 0)
    {
        printf("Monthly payment is not valid !");
        return 1;
    }

    // Convert interest rate into percent
    interestRate = (interestRate / 100) / 12;
    
    // Return surplus
    if (monthlyPayment > loan) 
    {
        excessFunds = monthlyPayment - loan;
        printf("This is your excess funds: $%lf\n", excessFunds);

    }
    // No longer in debt
    else if (monthlyPayment == loan )
    {
        printf("Paid Off");
    }
    // Calculate the remain after decrease the monthly payment and increase the interest rate 
    else 
    {
        remain1 = loan - monthlyPayment + (interestRate * loan);
        printf("Balance remaining after first payment: $%.2lf\n", remain1);
    
        remain2 = remain1 - monthlyPayment + (interestRate * remain1);
        printf("Balance remaining after second payment: $%.2lf\n", remain2);
 
        remain3 = remain2 - monthlyPayment + (interestRate * remain2);
        printf("Balance remaining after third payment: $%.2lf\n", remain3);
    }
    return 0;
}
