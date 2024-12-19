// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <limits.h>
long long task2(unsigned A[], size_t n)
{
  int locmax;
  locmax = INT_MAX;
  for (int i = 1; i < n-1; i++)
  {
	  if ((A[i] >= A[i - 1]) && (A[i]) >= A[i + 1])
	  {
		  if (A[i] < locmax)locmax = A[i];
	  }
  }
  if (locmax == INT_MAX) return -1;
  else return locmax;
}
