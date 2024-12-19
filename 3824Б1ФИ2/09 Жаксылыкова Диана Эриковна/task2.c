// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdio.h>
long long task2(unsigned A[], size_t n) {
    if (n < 3) {
        return -1;
    }
    long long min_local_max = -1;
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            if (min_local_max == -1 || A[i] < min_local_max) {
                min_local_max = A[i]; 
            }
        }
    }
    return min_local_max; 
}
