// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
#include <stdio.h>

size_t task2(double A[], size_t n)
{
  if (n == 1) {
      return 1; 
  }
  size_t count = 0; 
  for (size_t i = 0; i < n; i++) {
      if (i == 0 && A[i] >= A[i + 1]) {
          count++;
      }
      else if (i == n - 1 && A[i] >= A[i - 1]) {
          count++;
      }
      else if (i > 0 && i < n - 1 && A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
          count++;
      }
  }
  return count;
}
