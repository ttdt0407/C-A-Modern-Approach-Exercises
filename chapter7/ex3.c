/* Sums a series of numbers (using long variables) */
#include <stdio.h>
int main(void)
{
    double n;
    double sum = 0;

    printf("This program sums a series of double.\n");
    printf("Enter double value (0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2lf\n", sum);
    return 0;
}