#include <stdio.h>


int main()
{
    int speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1)
    {
        printf("Speed (knots)\tDescription\nLess than 1\t\tCalm");
    }
    else if (speed <= 3)
    {
        printf("Speed (knots)\tDescription\n1-3\t\tLight air");
    }
    else if (speed <= 27)
    {
        printf("Speed (knots)\tDescription\n4-27\t\tBreeze");
    }
    else if (speed <= 47)
    {
        printf("Speed (knots)\tDescription\n28-47\t\tGale");
    }
    else if (speed <= 63)
    {
        printf("Speed (knots)\tDescription\n48-63\t\tStorm");
    }
    else
    {
        printf("Speed (knots)\tDescription\nAbove 63\t\tHurricane");
    }

    return 0;
}