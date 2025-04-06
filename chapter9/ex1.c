// Search the array to find the largest element, then move it to the last
// position in the array
// Call itself recursively to sort the first n-1 elements of the array

#include <stdio.h>

void partitioning(int *A, int n);
void sort(int *A, int n);
void swap(int* x, int* y);


int main(void) {

  int A[] = {1,5,8,9,3,4,5,2};
  sort(A, 8);
  for (int i = 0; i < 8; i++)
    printf("%d ", A[i]);
  return 0;
}


void sort(int *A, int n) {
    if (n == 1)
      return;

    partitioning(A, n);
    sort(A, n - 1);
}

void partitioning(int *A, int n) {
  int max = A[0];
  int max_index = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] > max) {
      max = A[i];
      max_index = i;
    }
      
}
swap(&A[n-1], &A[max_index]);
}

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
    }
