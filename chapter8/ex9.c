#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    srand((unsigned int) time(NULL));

    char array[10][10] = {0};
    char alphabet[27] = {'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    int randomNum, index = 0;
    int row = 0;
    int column = 0;

    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = '.';
        }
    }

    array[row][column] = alphabet[index++];

    while (index < 26) {
    int accept = 0;
      for (int i = 0; i < 4; i++) {
        randomNum = i;
        int newRow = row;
        int newColumn = column;
        if (randomNum == 0) 
          newRow += 1;
        else if (randomNum== 1)
          newRow -= 1;
        else if (randomNum == 2)
          newColumn += 1;
        else
          newColumn -= 1;

        if (newRow >= 0 && newRow < 10 && newColumn >= 0 && newColumn < 10 &&
            array[newRow][newColumn] == '.') {
          accept = 1;
          break;
          }
      }

      if (!accept)
        break;

      randomNum = rand() % 4;
      int newRow = row;
      int newColumn = column;

    if (randomNum==0)
        newRow += 1;
    else if(randomNum == 1)
        newRow -= 1;
    else if (randomNum == 2)
        newColumn += 1;
    else 
        newColumn -= 1;
        
        if(newRow >= 0 && newRow <10 && newColumn >= 0 && newColumn < 10 && array[newRow][newColumn] == '.')
        {
          row = newRow;
          column = newColumn;
          array[row][column] = alphabet[index++];
        }

    }

    for (int i = 0; i < 10; i ++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }


    return 0;
}