#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float sum = 0;
    float e = 1;

    printf("Enter number n: ");
    scanf("%d", &n);
    
    if (n == 0)
        printf("e = 1\n");

    else if (n == 1)
        printf("e = 2\n");
        
    else 
    {
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                e *= j;
            }
            sum += (1 / e);
            e = 1;
        }

        printf("e = %.2f\n", sum + 2);
    }
    return 0;
}