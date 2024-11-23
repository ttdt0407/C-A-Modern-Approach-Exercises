
//  Write a program that calculates the average word length for a sentence:
//  Enter a sentence: It was deja vu all over again.
//  Average word length: 3.4
//  For simplicity, your program should consider a punctuation mark to be part of the word to
//  which it is attached. Display the average word length to one decimal place.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int wordLength = 0, numWord = 0;
    char inWord = 0;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n')

    {
        if(!isspace(ch))
            {
                wordLength++;
                if(!inWord)
                    {
                        inWord = 1;
                        numWord++;
                    }
            }
        else
            inWord = 0;
    }

    printf("Average word length: %.2f", (float) wordLength / numWord);

    return 0;
}