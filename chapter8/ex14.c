// Write a program that reverses the words in a sentence:
//  Enter a sentence: you can cage a swallow can't you?
//  Reversal of sentence: you can't swallow a cage can you?
#include <stdio.h>
int main(void)
{
    char ch;
    int index = 0;
    int jump;
    int indexMark;
    char sentence[50];
    char punctuation = '\0';

    printf("Enter a sentence: ");

    while((ch=getchar()) != '\n')
    {   
        if (ch == '.' || ch == '!' || ch == '?')
        {
            punctuation = ch;
            break;
        }
        sentence[index++] = ch;
        
    }
    sentence[index] = '\0';
    indexMark = index;
    index--;

    printf("Reversal of sentence: ");
    while(index >= 0)
    {   
        
        if(sentence[index] == ' ' || index == 0)
        {
            jump = (index == 0) ? index : index + 1;

            while(sentence[jump] != ' ' && sentence[jump] != '\0')
                printf("%c", sentence[jump++]);
            if(index > 0)
            printf(" ");
        }
        index--;
        
    }
    if (punctuation != '\0'){
      printf("%c", punctuation);
    }

    return 0;
}
