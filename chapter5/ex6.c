/* Computes a Universal Product Code check digit */
#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    int first_sum, second_sum, total, check_digit;

    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    
    first_sum = d1 + d3 + d5 + d7 + d9 + d11; 
    second_sum = d2 + d4 + d6 + d8 + d10; 
    total = 3 * first_sum + second_sum; 
    check_digit = 9 - ((total - 1) % 10);
    
    if (check_digit == d12)
    {
        printf("VALID");
    }
    else
    {
        printf("NOT VALID");
    }
    
    return 0;
}