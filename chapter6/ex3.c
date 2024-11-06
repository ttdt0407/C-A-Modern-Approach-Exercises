#include <stdio.h>

int main()
{
    int m, n, remainder, numerator, denominator;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    numerator = m;
    denominator = n;

    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest term: %d/%d\n", numerator / m, denominator / m);
    return 0;
}