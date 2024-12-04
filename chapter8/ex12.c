//  1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K,
//  8: JX, 10: QZ

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char ch;
    char index = 0;
    int sum = 0;
    int alphabet[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 
                  3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    while ((ch=getchar()) != '\n')
    {
        ch = toupper(ch);
        index = ch - 65;
        if((ch == 'Q') || (ch == 'Z'))
            sum++;
        sum += alphabet[index];
    }

    printf("Scrabble value: %d\n", sum);
    

    return 0;
}