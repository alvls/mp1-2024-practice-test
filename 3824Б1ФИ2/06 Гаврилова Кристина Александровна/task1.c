// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
#include <stdio.h>
#include <stdlib.h>
size_t task1(int A[], size_t n)
{
  if (n == 0 || n == 1) {
    return 0;
}
int count = 0;
for (int i = 0; i < n - 1; ++i) {
    if (A[i] < A[i + 1]) {
        count++;
    }
}
return count;
}
