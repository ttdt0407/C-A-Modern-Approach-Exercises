#include <stdio.h>

int main()
{
    float x;
    float max = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &x);
        if ( x > max)
        {
            max = x;
        }

    } while (x > 0);

    printf("The largest number entered was: %.2f", max);

    return 0;
}