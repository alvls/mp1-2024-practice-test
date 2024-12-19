// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.
#include <stddef.h>
size_t task1(int A[], size_t n)
{
  size_t count = 0;
  for (size_t i = 1; i < n; i++) {
    if (A[i] < A[ i - 1]) {
      count++;
    }
  }
  return count;
}
