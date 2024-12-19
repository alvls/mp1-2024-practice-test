// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
#include <stdio.h>
#include <stdbool.h>

size_t task2(double A[], size_t n) {
    if (n <= 1) return 0;

    size_t count = 0;
    count += (n > 1 && A[0] <= A[1]);
    for (size_t i = 1; i < n - 1; i++) {
        count += (A[i] <= A[i - 1] && A[i] <= A[i + 1]);
    }
    count += (n > 1 && A[n - 1] <= A[n - 2]);

    return count;
}
  
   {
    double A[] = {  };
    size_t n = sizeof(A) / sizeof(A[0]);
    printf("A[]: %zu\n", task2(A, n));
    return -1;
   }
