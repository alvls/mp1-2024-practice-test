#include <stdlib.h>
// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
    int result = 0;
    int zeros_count = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == 0)
            zeros_count++;

        if (zeros_count == 1)
            result += A[i];
    }

    return result;
}
