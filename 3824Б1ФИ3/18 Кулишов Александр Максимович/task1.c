// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
#include <stdlib.h>

int* task1(int A[], size_t N) {
    int *result = (int*)malloc(N * sizeof(int));
    int j = 0;

    for (int i = 0; i < N; i += 2) {
        result[j++] = A[i];
    }

    for (int i = 1; i < N; i += 2) {
        result[j++] = A[i];
    }

    return result;
}
