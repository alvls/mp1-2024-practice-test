// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
  long long local_min = -10;
  size_t c = 0;
  for (size_t i = 1; i < n - 1; i++) {
    if ((A[i] <= A[i + 1]) && (A[i] <= A[i - 1])) {
      c = 1;
      if (A[i] > local_min) {
        local_min = A[i];
      }
    }
  }
  if (c = 0) {
    return - 1;
  }
  return local_min;
}
