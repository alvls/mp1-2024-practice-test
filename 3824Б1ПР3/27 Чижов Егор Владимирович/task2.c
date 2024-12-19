// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <stdio.h>

long long task2(unsigned A[], size_t n)
{
    if (n == 1) {
        return -1;
    }

    long long min_local_min = -1;
    int found_local_min = 0;

    if (A[0] <= A[1]) {
        min_local_min = A[0];
        found_local_min = 1;
    }

    for (size_t i = 1; i < n - 1; ++i) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            if (!found_local_min || A[i] < min_local_min) {
                min_local_min = A[i];
                found_local_min = 1;
            }
        }
    }

    if (A[n - 1] <= A[n - 2]) {
        if (!found_local_min || A[n - 1] < min_local_min) {
            min_local_min = A[n - 1];
            found_local_min = 1;
        }
    }

    if (!found_local_min) {
        return -1;
    }

    return min_local_min;
}
