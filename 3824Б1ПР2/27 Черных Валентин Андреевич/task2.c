#include <stdlib.h>
#include <limits.h>

// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
    long long result = LLONG_MAX;

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i - 1] >= A[i] && A[i + 1] >= A[i]) {
            result = A[i] < result ? A[i] : result;
        }
    }

    if (result == LLONG_MAX) {
        return -1;
    }

    return result;
}
