#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {

  char walk[10][10];

  generate_random_walk(walk);
  print_array(walk);
  
  
}

void generate_random_walk(char walk[10][10]) {

  for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          walk[i][j] = '.';
          }
    }

    walk[0][0] = 'A';

    char letter = walk[0][0];
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    srand((unsigned) time(NULL));
    int row = 0;
    int col = 0;

    while (letter < 'Z') {
      int possible_move[4];
      int count = 0;


      for (int i = 0; i < 4; i++) {
        int new_row = row + dx[i];
        int new_col = col + dy[i];
        if (new_row >= 0 && new_row < 10 && new_col >= 0 && new_col < 10 &&
            walk[new_row][new_col] == '.') {
          possible_move[count] = i;
          count++;
          }
      }

      if (count == 0)
        break;

      int random_num = rand() % count;
      row += dx[possible_move[random_num]];
      col += dy[possible_move[random_num]];
      letter++;
      walk[row][col] = letter;
          
}
        
}

void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}