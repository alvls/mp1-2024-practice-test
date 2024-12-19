// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
#include <stdlib.h>
#include <stdio.h>

int* task1(int A[], size_t N) {
    int temp[N];
    size_t index = 0;

    for (size_t i = 0; i < N; i += 2) {
        temp[index++] = A[i];
    }

    for (size_t i = 1; i < N; i += 2) {
        temp[index++] = A[i];
    }
    for (size_t i = 0; i < N; i++) {
        A[i] = temp[i];
    }

    return A;
}
