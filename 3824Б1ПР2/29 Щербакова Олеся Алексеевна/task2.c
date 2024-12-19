// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <limits.h>

long long task2(unsigned A[], size_t n)
{
  unsigned long long loc_max = LLONG_MIN;
  unsigned long long min = LLONG_MAX;
  for (int i = 1; i < n - 1; i++) {
    if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
      loc_max = A[i];
      if (loc_max < min) min = loc_max;
    }
  }
  if (min == LLONG_MAX) return -1;
  return min;
}
