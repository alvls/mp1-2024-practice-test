// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
#include <stddef.h>
#include <stdlib.h>
size_t task1(int A[], size_t n) {
    size_t count = 0;
    for (size_t i = 0; i < n - 1; i++) {
        if (A[i] < A[i + 1]) {
            count++; 
        }
    }
    return count; 
}
