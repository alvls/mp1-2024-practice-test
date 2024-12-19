// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вычислить сумму S тех элементов массива, значения которых совпадают с их индексами.
#include <stdlib.h>

unsigned task1(unsigned * A, size_t n) {
    unsigned count = 0;
    for (size_t i = 0; i != n; ++i) {
        if (i == A[i]) {
            count +=A [i];
        }
    }
    return count;
}
