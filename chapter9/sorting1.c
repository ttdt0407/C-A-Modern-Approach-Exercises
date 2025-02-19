#include <stdio.h>

int partition_part(int *A, int start, int end);
void swap(int* x, int* y);

void quicksort_func(int *A, int start, int end) {

  if (start >= end)
    return;

  int middle = partition_part(A, start, end);
  quicksort_func(A, start, middle - 1);
  quicksort_func(A, middle + 1, end);
}

int partition_part(int* A, int start, int end) {

  int partition = start;
  int pivot = A[end];
  for (int i = start; i < end ; i++) {
    if (A[i] <= pivot) {
      swap(&A[partition], &A[i]);
      partition++;
      }
  }
  swap(&A[partition], &A[end]);
  return partition;
}

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
    }


int main(void) {

  int A[] = {2, 4, 5, 6, 7, 4, 1, 8, 9};
  quicksort_func(A, 0, 8);

  for (int i = 0; i < 9; i++) {
    printf("%d ", A[i]);
  }

  return 0;
    }