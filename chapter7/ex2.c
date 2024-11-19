#include <stdio.h>

int main(void)
{
    int i, n;
    int count = 0;

    printf("This program prints a table of squares. \n");
    printf("Ebter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        count++;
        if(count % 24 == 0)
        {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n')
                ;
        }
    }
        return 0;
}