#include <stdio.h>

int main(void)
{
    int itemNumber;
    float unitPrice;
    int date, month, year;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%8.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, date, year);

    return 0;
}