#include <stdio.h>

int main()
{
    int day1, month1, year1;
    int day2, month2, year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date(mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    int isEarlier = 0; // 1 if the first date is earlier, 0 otherwise (the second date)
    if(year1<year2)
        isEarlier = 1;
    else if(year1 == year2 && month1<month2)
        isEarlier = 1;
    else if(year1 == year2 && month1==month2 && day1 < day2)
        isEarlier = 1;

    if (isEarlier = 1)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    else
    printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);

    return 0;
}