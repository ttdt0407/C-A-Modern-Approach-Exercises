// Enter message to be encrypted: Go ahead, make my day.
// Enter shift amount (1-25): 3
// Encrypted message: Jr dkhdg, pdnh pb gdb.

// Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
// Enter shift amount (1-25): 23
// Encrypted message: Go ahead, make my day.

#include <stdio.h>

int main() {

  char array[80];
  char ch;
  int index = 0;
  int shiftAmount;

  printf("Enter message to be encrypted: ");
  
  while ((ch = getchar()) != '\n') {
    array[index++] = ch;
  }
  
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);

    if ((array[0] + shiftAmount) > 'Z')
      printf("%c", (array[0] + shiftAmount) - 'Z' + 'A'- 1);
    else
      printf("%c", array[0] + shiftAmount);

    for (int i = 1; i <= index; i++) {
      if ((array[i] + shiftAmount) > 'z' && array[i] >= 'a' && array[i] <= 'z')
        printf("%c", (array[i] + shiftAmount) - 'z' + 'a' - 1);
      else if ((array[i] + shiftAmount) <= 'z' && array[i] >= 'a' && array[i] <= 'z')
        printf("%c", array[i] + shiftAmount);
      else
        printf("%c", array[i]);
    }
      return 0;
    }