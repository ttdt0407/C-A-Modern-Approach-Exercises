#include <stdio.h>

int main(void)
{   
    //C99
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));
    
    //C89
    printf("Size of int: %d\n", (int)sizeof(int));
    printf("Size of short: %d\n", (int)sizeof(short));
    printf("Size of long: %d\n", (int)sizeof(long));
    printf("Size of float: %d\n", (int)sizeof(float));
    printf("Size of double: %d\n", (int)sizeof(double));
    printf("Size of long double: %d\n", (int)sizeof(long double));

    return 0;
}
