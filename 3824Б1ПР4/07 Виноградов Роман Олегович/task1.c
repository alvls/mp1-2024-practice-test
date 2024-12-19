// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
#include <stddef.h>

int task1(int A[], size_t n) {
    size_t first_zero = -1;
    size_t second_zero = -1;
    int sum = 0;

    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            if (first_zero == -1) {
                first_zero = i;
            } else {
                second_zero = i;
                break;
            }
        }
    }

    if (first_zero == -1 || second_zero == -1 || first_zero == second_zero - 1) {
        return -1;
    }

    for (size_t i = first_zero + 1; i < second_zero; i++) {
        sum += A[i];
    }

    return sum;
}

