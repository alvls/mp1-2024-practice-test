// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
#include <stddef.h>
#include <stdio.h>

int task1(int A[], size_t n)
{
    int first_zero_index = -1;
    int second_zero_index = -1;

    for (size_t i = 0; i < n; ++i) {
        if (A[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i;
            } else {
                second_zero_index = i;
                break;
            }
        }
    }
    if (first_zero_index == -1 || second_zero_index == -1) {
        return -1;
    }
    int sum = 0;
    for (size_t i = first_zero_index + 1; i < second_zero_index; ++i) {
        sum += A[i];
    }

    return sum;
}
