#include <stdio.h>
#include <stdlib.h>

int* task1(int A[], int n) {

  int* B = (int*)malloc(n * sizeof(int));
  if (B == NULL) {
    printf("Ошибка выделения памяти\n");
    return NULL; 
  }

  int i = 0, k = 0;

  while (i < n) {
    B[k++] = A[i];
    i += 2;
  }

  i = 1; 

  while (i < n) {
    B[k++] = A[i];
    i += 2;
  }

  return B;
}
