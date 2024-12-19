// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
#include <stdio.h>
#include <stdlib.h>

int* task1(const int A[], size_t N) {
    if (A == NULL || N == 0) {
        return NULL;
    }

    int new_array = (int)malloc(N * sizeof(int));
    if (new_array == NULL) {
        fprintf(stderr, "Ошибка выделения памяти.\n");
        exit(EXIT_FAILURE);
    }

    size_t new_index = 0;

    for (size_t i = 0; i < N; i += 2) {
        new_array[new_index++] = A[i];
    }

    for (size_t i = 1; i < N; i += 2) {
        new_array[new_index++] = A[i];
    }

    return new_array;
}
