// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
#include <stdio.h>
int task1(unsigned A[], size_t N)
{
  unsigned minIndex = 0, maxIndex = 0;
  unsigned minValue = A[0], maxValue = A[0];
  for (unsigned i = 1; i < N; i++) {
      if (A[i] < minValue) {
          minValue = A[i];
          minIndex = i;
      }
      if (A[i] >= maxValue) { 
          maxValue = A[i];
          maxIndex = i;
      }
  }
  if (minIndex > maxIndex) {
      unsigned tmp = minIndex;
      minIndex = maxIndex;
      maxIndex = tmp;
  }
  return maxIndex - minIndex - 1;
}
