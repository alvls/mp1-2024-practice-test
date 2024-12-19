// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наименьшей серии.
#include <stddef.h>
#include <limits.h> 

int task2(unsigned A[], size_t n)
{
  if (n == 0) 
  {
    return -1; 
  }
  if (n == 1)
  {
    return 1; 
  } 
  int minSeries = INT_MAX; 
  size_t currentSeries = 1; 
  for (size_t i = 1; i < n; ++i) 
  {
    if (A[i] == A[i - 1]) 
    {
      currentSeries]++; 
    } else 
    {
      if (currentSeries < minSeries) 
      {
        minSeries = currentSeries;
      }
      currentSeries = 1; 
    }
  }
    if (currentSeries < minSeries) 
    {
      minSeries = currentSeries;
    }
  return minSeries;
}
