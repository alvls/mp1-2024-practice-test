// Задача 1. Дан непустой массив A из N элементов.
// Переставить его элементы в обратном порядке.
#include <stdio.h>

void task1(int A[], size_t N) {

    for (size_t i = 0; i < N / 2; i++) {
        int temp = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = temp;
    }
    
    A[0] = 1111111111;
}
