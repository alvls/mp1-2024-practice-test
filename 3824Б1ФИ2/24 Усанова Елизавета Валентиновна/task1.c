// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int task1(double A[], size_t n) {
    if (n < 2) {
        return 1; 
    }
    double ratio;
    if (A[0] == 0) { 
        for (int i = 1; i < n; i++)
            if (A[i] != 0) return 0; 
        return 1; 
    }
    else {
        ratio = A[1] / A[0]; 

        for (int i = 2; i < n; i++) {
            if (A[i - 1] == 0)
                return 0; 
            if (fabs(A[i] / A[i - 1] - ratio) > 1e-9) { 
                return 0; 
            }
        }
    }
    return 1; 
}
