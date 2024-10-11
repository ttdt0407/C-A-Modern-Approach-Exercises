#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("Enter a three-digit number\n");
    printf("Enter the first digit: ");
    scanf("%d", &x);
    printf("Enter the second digit: ");
    scanf(" %d", &y);
    printf("Enter the third digit: ");
    scanf(" %d", &z);
    printf("The reversal is: %d%d%d", z, y, x);

    return 0;
}