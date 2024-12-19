// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вернуть 1, если его элементы образуют арифметическую прогрессию,
// иначе вернуть 0.
int task1(unsigned A[], size_t n) {
  if (n <= 1) {
    return 1;
  }

  int common_diff = A[1] - A[0];

  for (size_t i = 1; i < n - 1; i++) {
    if (A[i + 1] - A[i] != common_diff) {
      return 0;
    }
  }

  return 1;
}