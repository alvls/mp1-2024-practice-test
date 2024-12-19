// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <stddef.h>

int task1(int A[], size_t n) {
    if (n == 0) {
        return -1;
    }

    int max_index = 0;
    for (size_t i = 1; i < n; i++) {
        if (A[i] >= A[max_index]) {
            max_index = i;
        }
    }

    return max_index;
}
