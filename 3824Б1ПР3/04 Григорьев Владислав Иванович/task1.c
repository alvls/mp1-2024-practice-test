// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
#include <stddef.h>

int task1(double A[], size_t n) {
    if (n <= 1) {
        return 1;
    }
    if (A[0] == 0) {
        return 0;
    }
    double ratio = A[1] / A[0];
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] == 0) {
            return 0; 
        }
        if (A[i + 1] / A[i] != ratio) {
            return 0; 
        }
    }
    return 1; 
}
