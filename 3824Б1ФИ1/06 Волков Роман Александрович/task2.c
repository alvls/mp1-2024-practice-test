// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <limits.h>
#define MAX(A, B) (A > B) ? A : B

long long task2(unsigned A[], size_t n)
{
  int i, f = 0;
  long long maxval = LLONG_MIN;
  for (i = 1; i < n-1; i++)
  {
    if ((A[i] <= A[i+1]) && (A[i] <= A[i-1]))
    {
      maxval = MAX(maxval, A[i]);
      f = 1;
    }
  }
  if (f)
    return maxval;
  return -1;
}
