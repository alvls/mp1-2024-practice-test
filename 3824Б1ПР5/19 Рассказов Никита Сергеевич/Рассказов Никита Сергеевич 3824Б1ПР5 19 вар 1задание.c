// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к четным числам первый элемент,
// а к нечетным – последний.
#include <stdio.h>
#include <locale.h>
void task1(unsigned A[], size_t N);

    setlocale(LC_ALL, "Russian");
    unsigned A[] = { 2, 5, 8, 7, 4 };
    size_t N = sizeof(A) / sizeof(A[0]);

    printf("Исходный массив:\n");
    for (size_t i = 0; i < N; i++) {
        printf("%u ", A[i]);
    }
    printf("\n");

    task1(A, N);

    printf("Преобразованный массив:\n");
    for (size_t i = 0; i < N; i++) {
        printf("%u ", A[i]);
    }
    printf("\n");

    return 0;
}

void task1(unsigned A[], size_t N) {
    if (N == 0) {
        return;
    }

    unsigned first = A[0];
    unsigned last = A[N - 1];

    for (size_t i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            A[i] += first;
        }
        else {
            A[i] += last;
        }
    }
}
