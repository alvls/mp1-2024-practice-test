// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
#include <stdio.h>
#include <stdlib.h>
int task1(int A[], size_t n) {
    int lastIndex = -1;
    int secondLastIndex = -1;

    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            secondLastIndex = lastIndex;
            lastIndex = i;
        }
    }

    if (secondLastIndex == -1) {
        return -1111111111;
    }

    int sum = 0;
    for (size_t i = secondLastIndex + 1; i < lastIndex; i++) {
        sum += A[i];
    }

    return sum;
}
