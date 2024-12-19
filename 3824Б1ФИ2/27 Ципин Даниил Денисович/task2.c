// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <stddef.h>
#include <limits.h>

long long task2(unsigned A[], size_t n) {
    if (n < 3) {
        return -1;
    }

    unsigned min_local_min = UINT_MAX;
    int found_local_min = 0;

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            if (A[i] < min_local_min) {
                min_local_min = A[i]; 
            }
            found_local_min = 1;
        }
    }
  
    if (found_local_min) {
      return min_local_min;
    }
    else {
      return -1;
    }
}
