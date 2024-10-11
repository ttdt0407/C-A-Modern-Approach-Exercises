#include <stdio.h>
// convert from decimal to octal
int main(void)
{
    int n;

    printf("Enter a number betwwen 0 to 32767: ");
    scanf("%d", &n);
    printf("%d%d%d%d%d", (n / (8 * 8 * 8 * 8)) % 8, (n / (8 * 8 * 8)) % 8, (n / (8 * 8)) % 8, (n / 8) % 8, n % 8);

    return 0;
}