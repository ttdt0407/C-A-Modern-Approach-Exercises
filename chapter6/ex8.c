#include <stdio.h>

// Prints a one-month calendar
int main(void)
{
    int daysInMonth, startingDay;

    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startingDay);

    for (int i = 1; i < startingDay; i ++)
        printf("   ");

    for (int j = 1; j <= daysInMonth; j++)
    {
        printf("%3d", j);
        if ( (startingDay + j - 1) % 7 == 0 )
            printf("\n");
    }
}     