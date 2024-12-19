// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdio.h>
#include <stddef.h>
long long task2(unsigned A[], size_t n)
{
  long long maxLocalMax = -1;

  if (n == 1) {
    return A[0];
  }
  
  if (n > 1 && A[0] >= A[1]) {
        maxLocalMax = A[0];
    }

  for (size_t i = 1; i < n - 1; i++) {
      if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
          if (A[i] > maxLocalMax) {
              maxLocalMax = A[i];
          }
      }
  }

  if (n > 1 && A[n - 1] >= A[n - 2]) {
      if (A[n - 1] > maxLocalMax) {
          maxLocalMax = A[n - 1]; // Последний элемент является локальным максимумом
      }
  }
  return maxLocalMax;
}
