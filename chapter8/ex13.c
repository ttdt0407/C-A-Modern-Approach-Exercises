// Modify Programming Project 11 from Chapter 7 so that the program labels its output:
// Enter a first and last name: Lloyd Fosdick
// You entered the name: Fosdick, L.
// The program will need to store the last name (but not the first name) in an array of characters
// until it can be printed. You may assume that the last name is no more than 20 characters long.

#include <stdio.h>

int main(void)

{   

    char lastName[20];
    char ch;
    char firstName;

    printf("Enter a first and last name: ");

    firstName = getchar();
    while(getchar() != ' ')
        ;
    int i = 0;

    while ((ch=getchar()) != '\n' && i < 19)
    {
        lastName[i++] = ch;
    }

    printf("You entered the name: ");

    i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%c", lastName[i]);
        if(lastName[i]==0)
            break;
    }
        printf(", %c.", firstName);

    return 0;
}