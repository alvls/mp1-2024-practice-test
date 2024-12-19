#include <stdlib.h>
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов,
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий в массиве.
int task2(unsigned A[], size_t n) {
  int element_counter = 1;
  int series_counter  = 0;

  for (size_t i = 1; i < n; i++) {
    if (A[i] == A[i - 1]) {
      element_counter++;
    } else {
      if (element_counter >= 2) { series_counter++; }
      element_counter = 1;
    }
  }

  if (element_counter >= 2) { series_counter++; }

  return series_counter;
}
