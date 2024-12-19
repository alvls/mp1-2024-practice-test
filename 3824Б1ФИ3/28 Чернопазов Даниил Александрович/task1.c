// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
#include <stdio.h>
#include <stddef.h>
int task1(int A[], size_t n)
{
  int lastZeroInd = -1;
    int secondLastZeroInd = -1;
  for (size_t i = n; i > 0; i--) {
      if (A[i - 1] == 0) {
          if (lastZeroInd == -1) {
              lastZeroInd = i - 1;
          } else {
              secondLastZeroInd = i - 1;
              break;
          }
      }
  }
  if (secondLastZeroInd == -1) {
      return -1111111111;
  }
  int sum = 0;
  for (size_t i = secondLastZeroInd + 1; i < lastZeroInd; i++) {
      sum += A[i];
  }
  return sum;
}
