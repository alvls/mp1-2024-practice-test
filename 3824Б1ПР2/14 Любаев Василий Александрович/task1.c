// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
#include <stdio.h>

int task1(int* A, size_t N)
{
  int big = -100000, smol = 100000; //костыль чтобы big и smol попадали в большинство элементов
  for (int i = 0; i < N; i++) {
    if (A[i] < smol) { smol = A[i]; }
    else if (A[i] > big) { big = A[i]; }
  }
  printf("\nbig = %d; smol = %d", big, smol);
  return -1;
}
