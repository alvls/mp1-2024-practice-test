// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <stdio.h>
int task1(int A[], size_t n) {
    if (n == 0) return -1;
    int maxIndex = 0;
    for (size_t i = 1; i < n; i++) {
        if (A[i] >= A[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
