#include <stdio.h>

// Conver the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes

int main()
{
    int hour, minute;
    int convert;
    printf("Enter a 24-hour time (x:y): \n");
    scanf("%d:%d", &hour, &minute);

    convert = hour * 60 + minute;

    if (convert >= 0 && convert <= 532)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if(convert >532 && convert <= 631)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");        
    }
     else if(convert > 631 && convert <= 723)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
        
    }
     else if(convert > 723 && convert <= 804)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
        
    }
     else if(convert > 804 && convert <= 893)
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
     else if(convert >893 && convert <= 1043)
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
     else if(convert >1043 && convert <= 1223)
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }
    return 0;
}