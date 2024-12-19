// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 

#include <stdlib.h>

int* task1(int A[], size_t N)
{
int* newA = (int*)malloc(N * sizeof(int));
size_t evenidx = 0;
size_t oddidx = (N + 1) / 2;
for (size_t i = 0; i < N; i += 2) {
    newA[evenidx++] = A[i];
}
for (size_t i = 1; i < N; i += 2) {
    newA[oddidx++] = A[i];
}
return newA;
}
