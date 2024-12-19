// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
#include <stdio.h>
#include <stdlib.h>
int task1(double A[], size_t n)
{
    if (n <= 2) {
        return 1;
    }
    float ratio = A[1] / A[0];

    for (int i = 2; i < n; i++) {
        if (A[i] / A[i - 1] != ratio) {
            return 0;
        }
    }
    return 1;
}
