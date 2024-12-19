// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 2 в массиве.
#include <stdio.h>
int task2(unsigned A[], size_t n)
{
  int count = 0;
  for (size_t i = 0; i < n - 1; ++i) {
    if (A[i] == A[i + 1]) {
      int series_length = 1;
      while (i < n - 1 && A[i] == A[i + 1]) {
        series_length++;
        i++;
      }
      if (series_length == 2) {
        count++;
      }
    }
  }
  return count;
}
