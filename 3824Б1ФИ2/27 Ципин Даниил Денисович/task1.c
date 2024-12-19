// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n) {
  int sum = 0;
  char first_zero_found = 0;
  for (size_t i = 0; i < n; ++i) {
    if (A[i] == 0) {
      if (!first_zero_found) {
        first_zero_found = true;
      }
      else {
        break; второй ноль найден, окончание суммирования
      }
    } else if (first_zero_found) {
      sum += A[i];
    }
  }
  return sum;
}
