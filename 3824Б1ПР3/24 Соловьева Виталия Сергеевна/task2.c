#include <stddef.h>
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
size_t task2(double A[], size_t n)
{
  if (n < 2) {
        return 0;
  }
  double ratio = A[1] / A[0];
  for (size_t i = 1; i < n - 1; i++) {
    if (A[i] == 0 || A[i + 1] / A[i] != ratio) {
            return 0;
    }
  }
  return 1;
}
