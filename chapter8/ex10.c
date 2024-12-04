#include <stdio.h>
#include <math.h>

// Conver the input into a time expressed in minutes since
// midnight, and compare it to the departure times, also expressed in minutes

int main()
{
    int hour, minute;
    int convert;
    int index;
    printf("Enter a 24-hour time (x:y): \n");
    scanf("%d:%d", &hour, &minute);

    convert = hour * 60 + minute;

    int departureTime[] = {480, 583, 697, 767, 840, 945, 1140, 1305};
    int arriveTime[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int min = fabs((double)departureTime[0] - (double)convert);

    for (int i = 1; i <= 7; i++) {
      if (fabs((double)departureTime[i] - (double)convert) < min){
        min = fabs((double)departureTime[i] - (double)convert);
        index = i;
      }
    }

    hour = departureTime[index] / 60;
    if (hour > 12 && hour < 24)
      hour -= 12;
    minute = departureTime[index] % 60;
    printf("The closest departure time is: %d:%.2d", hour, minute);
    if (hour < 12)
      printf(" am\n");
    else
      printf(" pm\n");

    hour = arriveTime[index] / 60;
    if (hour > 12 && hour < 24)
      hour -= 12;
    minute = arriveTime[index] % 60;
    printf("The arriving time at: %d:%.2d", hour, minute);
    if (hour < 12)
      printf(" am\n");
    else
      printf(" pm\n");

    return 0;

}