#include <stdio.h>
// Program that convert numerical 2-digits to letter in English
// Using 3 array to store constant character values 
int main()

{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    const char *TEENS[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char *TENS[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    const char *UNITS[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num < 11 || num > 99)
    {
        printf("Please enter a valid two-digit number between 11 and 99\n");
        return 0;
    }
    else if (num >= 11 && num <= 19)
    {
        printf("You entered the number %s", TEENS[num - 11]);
        return 0;
    }
    else
    {
        printf("You entered the number %s", TENS[num / 10 - 2]);
        if (num % 10 != 0)
        {
            printf("-%s", UNITS[num % 10 - 1]);
        }
        else 
        {
            printf("\n");
        }

    }
    return 0;
}