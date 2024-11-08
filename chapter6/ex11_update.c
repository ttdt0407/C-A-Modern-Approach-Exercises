#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    float e = 1.0 ;
    float sum = 1.0 ;

    printf("Enter number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        e *= i;
        sum += 1 / e;
    }
    printf("e = %f", sum);
    return 0;
}