#include <stdio.h>
#include <math.h>

double amount;
double amountWithTax;
int main() 
{
    printf("Enter a dollars-and-cents amount: ");
    scanf("%lf", &amount);

    amountWithTax = amount + amount * 0.05f;
    printf("The total amount with tax added: $%.2lf", amountWithTax);
    return 0;
}
