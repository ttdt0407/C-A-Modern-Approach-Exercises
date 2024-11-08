#include <stdio.h>

int main(void)
{
    int month, day, year;
    int earlierMonth, earlierDay, earlierYear;
     
    printf("Enter a date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    earlierMonth = month;
    earlierDay = day;
    earlierYear = year;

    while(1)  
    {
        printf("Enter a date: ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0)
            break;
        
        if (year < earlierYear || year == earlierYear && month < earlierMonth 
        || year == earlierYear && month == earlierMonth && day < earlierDay)
        {
            earlierMonth = month;
            earlierDay = day;
            earlierYear = year;
        }

    }

    printf("%d/%d/%.2d is the earliest date\n", earlierMonth, earlierDay, earlierYear);

    return 0;
}