#include <stdio.h>
#include <ctype.h>


int main()
{
    int hour, minute;
    int convert;
    char am_pm1, am_pm2;
    printf("Enter a 12-hour time (x:y): \n");
    scanf("%d:%d %c%c", &hour, &minute, &am_pm1, &am_pm2);



    am_pm1 = toupper(am_pm1);
    am_pm2 = toupper(am_pm2);
    
    if (am_pm1 == 'P' && hour < 12)
    hour+= 12;

    else if (am_pm1 == 'A' && hour == 12)
      hour = 0;

    printf("%d:%.2d", hour, minute);

    return 0;

}