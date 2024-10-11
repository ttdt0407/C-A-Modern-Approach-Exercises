#include <stdio.h>
// The program asks the user enter a three-digit number, then prints the number with its digits reversed
int main(void)
{
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    printf("The reversal is: %d%d%d", n % 10, (n / 10) % 10, n / 100);

    return 0;
}