// Writes a program that uses Newton's method to compute the square root of a positive floating number
// Enter a positive number: 3
// Square root: 1.73205

#include <stdio.h>
#include <math.h>



int main(void)
{
    double x, divide = 0;
    double y = 1.0, Y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(1)
    {
        Y = 0.5 * (y + x / y);
        if(fabs(Y-y) < 0.00001)
            break;
        y = Y;
    }

    printf("Square root: %.5f", Y);

    return 0;
}