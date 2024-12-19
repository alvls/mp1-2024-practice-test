// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <limits.h>

long long task2(unsigned A[], size_t n)
{
  int k = 0,i = 0;
  long long min = LLONG_MIN;
  for (i = 1; i < n - 1; i++)
  {
    if (A[i - 1] >= A[i] && A[i] <= A[i + 1])
    {
      if (k == 0)
      {
        min = A[i];
        k++;
      }
      else
      {
        if (A[i] < min)
          min = A[i];
      }
    }
  }
  if (k == 0)
    return -1;
  else
    return min;
}
