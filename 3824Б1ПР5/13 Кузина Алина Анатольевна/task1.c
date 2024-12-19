// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
#include <stdio.h>
#include <stddef.h>

int task1(unsigned A[], size_t N) {
    if (N == 0) {
        return -1;
    }

    unsigned min = A[0];
    unsigned max = A[0];
    size_t min_index = 0;
    size_t max_index = 0;

    for (size_t i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            min_index = i;
        }
        if (A[i] > max) {
            max = A[i];
            max_index = i;
        }
    }

    return (min_index < max_index) ? min_index : max_index;
}
