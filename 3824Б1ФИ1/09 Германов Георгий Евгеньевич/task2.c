// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdlib.h>
#include <limits.h>

long long task2(unsigned A[], size_t n) {
    if (n == 1) {
        return -1;
    }

    long long min_local_max = LLONG_MAX;

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            if (A[i] < min_local_max) {
                min_local_max = A[i];
            }
        }
    }

    if (min_local_max == LLONG_MAX) {
        return -1;
    }

    return min_local_max;
}
