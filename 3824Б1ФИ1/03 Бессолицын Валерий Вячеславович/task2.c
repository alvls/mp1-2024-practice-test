// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdlib.h>

int compare(const void * a, const void * b) {
    const double diff = *(double*)a - *(double*)b;
    if (diff > 0.0) return 1;
    if (diff < 0.0) return -1;
    return 0;
}

size_t task2(double * A, size_t n) {
    if (n == 0) return 0;

    qsort(A, n, sizeof(double), compare);

    size_t unique_count = 1;
    for (size_t i = 1; i < n; ++i) {
        if (A[i] != A[i - 1]) {
            ++unique_count;
        }
    }

    return unique_count;
}
