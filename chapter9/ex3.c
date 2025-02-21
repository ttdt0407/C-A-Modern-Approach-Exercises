#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void random_walk(char (*ptr)[10], int row, int column);


int main(void) {

  char array_map[10][10];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++) {
      array_map[i][j] ='.';
      }
  

  random_walk(array_map, 0, 0);
  

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", array_map[i][j]);
    }
    printf("\n");
    }
  

  return 0;
}


void random_walk(char (*ptr)[10], int row, int column) {
  char letter = 'A';
  int dx[] = {0, 0, -1, 1};
  int dy[] = {1, -1 ,0 ,0};
  srand((unsigned)time(NULL));
  int random_num;
  int new_row, new_col;
  ptr[row][column] = letter;
  letter++;

  while (letter <= 'Z') {
    do {
      random_num = rand() % 4;
      new_row = row + dx[random_num];
      new_col = column + dy[random_num];
    } while (new_row < 0 || new_row > 9 || new_col < 0 || new_col > 9 ||
             ptr[new_row][new_col] != '.');

    ptr[new_row][new_col] = letter;
    letter++;
    row = new_row;
    column = new_col;
  }
}

