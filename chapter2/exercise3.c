#include <stdio.h>
#include <math.h>

int main()
{
    #define PI_NUMBER 3.14159265358
    int radius;

    printf("Enter your radius: ");
    scanf("%d", &radius);

    double volume = 4.0f / 3.0 * PI_NUMBER * pow(radius, 3);
    printf("Volume of a sphere with a %d-meter radius: %lf\n", radius, volume);

    return 0;
}