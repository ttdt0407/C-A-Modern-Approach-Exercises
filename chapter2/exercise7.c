#include <stdio.h>

// The program that shows how much different types of smallest money (20$, 10$, 5$, 1$) when input's a big amount
int main()
{   
    int totalAmount;
    int amountOf20;
    int amountOf10;
    int amountOf5;
    int amountOf1;

    printf("Enter a dollar amount: ");
    scanf("%d", &totalAmount);
    amountOf20 = totalAmount / 20;
    amountOf10 = (totalAmount - amountOf20 * 20) / 10;
    amountOf5 = (totalAmount - amountOf20 * 20 - amountOf10 * 10) / 5;
    amountOf1 = (totalAmount - amountOf20 * 20 - amountOf10 * 10 - amountOf5 * 5);
    
    printf("$20 bills: %d\n", amountOf20);
    printf("$10 bills: %d\n", amountOf10);
    printf("$5 bills: %d\n", amountOf5);
    printf("$1 bills: %d\n", amountOf1);

    return 0;
}
   
