// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdio.h>
#include<limits>
long long task2(unsigned A[], size_t n) {
    if (n < 3) return -2;
    int min_local = LLONG_MAX; 
    for (int i = 1; i < n - 1; ++i) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            if (A[i] < min_local) min_local = A[i];
        }
    }
    if (min_local == LLONG_MAX)  return -1; 
    return min_local;
}
