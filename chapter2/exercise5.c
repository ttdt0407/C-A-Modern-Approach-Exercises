#include <stdio.h>
#include <math.h>
int main ()
{
    double x;
    double result;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    printf("The result of the function: %.2lf\n", result);

    return 0;
}
