//  Enter first word: smartest
//  Enter second word: mattress
//  The words are anagrams.

//  Enter first word: dumbest
//  Enter second word: stumble
//  The words are not anagrams.

#include <stdio.h>
#include <ctype.h>
int main()
{
    int arr_count[26] = {0};
    char ch, sh;
    int index = 0;
    int tag = 0;

    printf("Enter first word: ");
    while((ch=getchar()) != '\n')
    {
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z')
            arr_count[ch - 'A'] += 1;          
    }

    printf("Enter second word: ");
    while((sh=getchar()) != '\n')
    {
        sh = toupper(sh);
        if (sh >= 'A' && sh <= 'Z')
            arr_count[sh - 'A'] -= 1;
    }

    for (int j = 0; j < 26; j++)
    {
        if(arr_count[j] != 0)
        {
            tag = 1;
            break;
        }
    }
    
    if (tag == 1)
    
        printf("The words are not anagrams.");
    else
        printf("The words are anagrams.");

    return 0;
}
