#include <stdio.h>

int main()
{
    int x, y;
    int min = 0;
    int max = 0;
    int gcd = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if(x != y)
    {
        if (x > y)
            {
              min = y;
              
            }
        else
            {
                min = x;
                
            }
     for (int i = min; i > 0; i--)
        {
            if((x % i == 0) && (y % i == 0))
                {

                    gcd = i;
                    break;

                }

        }
    }
    else
        {
            gcd = x;
        }

        printf("Greatest common divisor: %d\n", gcd);

        return 0;
        /* Euclid's Algorithm
        int main(void)
        {
          int m, n, remainder;

          printf("Enter two integers: ");
          scanf("%d%d", &m, &n);

          while (n != 0) {
            remainder = m % n;
            m = n;
            n = remainder;
          }

          printf("Greatest common divisor: %d\n", m);

          return 0;
          */
}