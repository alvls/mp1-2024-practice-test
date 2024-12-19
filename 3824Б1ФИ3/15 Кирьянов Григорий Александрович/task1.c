// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
#include <stddef.h>
#include <limits.h>

int task1(unsigned A[], size_t N)
{
  if (N == 0) {
    return -1; 
  }

  unsigned minVal = UINT_MAX;
  unsigned maxVal = 0;
  size_t minIndex = 0;
  size_t maxIndex = 0;

  for (size_t i = 0; i < N; i++) {
    if (A[i] < minVal) {
      minVal = A[i];
      minIndex = i;
    }
    if (A[i] >= maxVal) {
      maxVal = A[i];
      maxIndex = i;
    }
  }

    if (minIndex == maxIndex) {
        return 0;
    }


  if (minIndex < maxIndex) {
    return (int)(maxIndex - minIndex - 1);
  } else {
    return (int)(minIndex - maxIndex - 1);
  }
}
