// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdio.h>
#include <limits.h> // Для LONG_MIN

long long task2(unsigned A[], size_t n) {
    if (n == 1) {
        return A[0]; 
    }

    long long maxLocalMax = LONG_MIN; 

    if (A[0] >= A[1]) {
        if (A[0] > maxLocalMax) {
            maxLocalMax = A[0];
        }
    }

    for (size_t i = 1; i < n - 1; ++i) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            if (A[i] > maxLocalMax) {
                maxLocalMax = A[i];
            }
        }
    }

    if (A[n - 1] >= A[n - 2]) {
        if (A[n - 1] > maxLocalMax) {
            maxLocalMax = A[n - 1];
        }
    }

    return (maxLocalMax == LONG_MIN) ? -1 : maxLocalMax;
}
