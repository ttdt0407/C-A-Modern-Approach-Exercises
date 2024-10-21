#include <stdio.h>



void main()
{

    int num1, num2, num3, num4;
    int largest, smallest;

    printf("Enter four integer: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2)
    {
        largest = num1;
        smallest = num2;
    }
    else if (num1 < num2)
    {
        smallest = num1;
        largest = num2;
    }
    else if(num3 > largest)
    {
        largest = num3;
    }
    else if(num3 < smallest)
    {
        smallest = num3;
    }
    if (num4 > largest)
    {
        largest = num4;
    }
    else if (num4 < smallest)
    {
        smallest = num4;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    
}
