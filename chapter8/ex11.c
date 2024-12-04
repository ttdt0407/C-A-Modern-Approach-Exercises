#include <stdio.h>
#include <ctype.h>

int main()
{
    char alphabet[8][3] = {{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y'}};
    char number[] = {'2', '3', '4', '5', '6', '7', '8', '9'};
    char ch;

    printf("Enter a phone number: ");

    while((ch=getchar())!= '\n')
    {
        if(isalpha(ch))
        {
            ch = toupper(ch);
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if(ch==alphabet[i][j])
                       { ch = number[i];
                           break;
                       }
                }
                if(ch == number[i])
                    break;
            }
        }

        printf("%c", ch);
    }
    printf("\n");

    return 0;
}