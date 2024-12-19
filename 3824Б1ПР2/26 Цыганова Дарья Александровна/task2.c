// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <stdio.h>
long long task2(unsigned A[], size_t n) {
    if (n < 3) { return -1; }
    long long max_local_min = -1; 
    int found_local_min = 0; 

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            found_local_min = 1;
            if (A[i] > max_local_min) {
                max_local_min = A[i];
            }
        }
    }
    return found_local_min ? max_local_min : -1;
}
