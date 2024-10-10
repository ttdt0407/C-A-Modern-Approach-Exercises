#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d / %d / %d", &month, &day, &year);

    if( day > 31 || day < 1 )
    {
        printf("Date is not valid");
        return 1;
    }

    if( month > 12 || month < 1 )
    {
        printf("Month is not valid");
        return 1;
    }
       
    printf ("You entered the date %.2d%.2d%d ", year, month, day);
    
    return 0;
}