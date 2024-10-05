#include <stdio.h>

double x;
double result;

int main() 
{
    printf("Enter x: ");
    scanf("%lf", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x + 6; // Horner' Rule
    printf("Result: %.2lf", result);

    return 0;

}