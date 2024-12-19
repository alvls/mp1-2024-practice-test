// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
#include <stddef.h>

int task1(int A[], size_t n)
{
    if (n == 0) {
        return -1; // Массив пустой
    }

    int minIndex = 0;
    int minValue = A[0];

    for (size_t i = 1; i < n; ++i) {
        if (A[i] < minValue) {
            minValue = A[i];
            minIndex = i;
        }
    }

    return minIndex;
}
