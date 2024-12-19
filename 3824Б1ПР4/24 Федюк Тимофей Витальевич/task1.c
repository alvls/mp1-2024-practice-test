// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int task1(double A[], size_t n) {
    if (n <= 2) return 1;
    int f = -1, s = -1;
    for (size_t i = 0; i < n; ++i) {
        if (A[i] != 0) {
            if (f == -1) f = i;
            else if (s == -1) s = i;
            else break;
        }
    }
    if (f == -1 || s == -1) return 1;
    for (size_t i = f + 1; i < s; i++) if (A[i] != 0) return 0;
    double r = A[s] * A[s];
    for (size_t i = s + 1; i < n; i++) {
        if (A[i] == 0) continue;
        if (fabs(A[i] * A[f] - r) > 1e-9) return 0;
        r = A[s] * A[i];
    }
    return 1;
}
   {

    double A[] = { };
    size_t n = sizeof(A) / sizeof(A[0]);
    printf("A[]: %d\n", task1(A, n));

    return -1;
   }
