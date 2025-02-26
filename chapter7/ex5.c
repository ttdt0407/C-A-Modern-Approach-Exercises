#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int sum = 0;
    char ch;

    printf("Enter a word: ");
    
    while ( (ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
        case 'D':
        case 'G':
            sum += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            sum += 3;
            break;
        case 'F':
        case 'V':
        case 'H':
        case 'W':
        case 'Y':
            sum += 4;
            break;
        case 'K':
            sum += 5;
            break;
        case 'J':
        case 'X':
            sum += 8;
            break;
        case 'Q':
        case 'Z':
            sum += 10;
            break;
        default :
            sum += 1;
        }
    }
    printf("Scrabble value: %d", sum);
   
    return 0;
}