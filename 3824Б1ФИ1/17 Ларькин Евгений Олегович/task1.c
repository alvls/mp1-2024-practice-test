// Задача 1. Дан непустой массив A из N элементов.
// Переставить его элементы в обратном порядке.
#include <stdio.h>
void task1(int A[], size_t N){
  for (size_t i = 0; i < N / 2; i++) {
        int t = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = t;
    }
}
