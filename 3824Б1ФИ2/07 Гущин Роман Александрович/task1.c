// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.

int task1(int A[], size_t n)
{
  int sum = 0, first = -1, second = -1;
  for (int i = 0; i < n; i++) {
    if (A[i] == 0) {
      if (first == -1) 
        first = i;
      else {
        second = i;
        break;
      }
    }
  }
  if (first != -1 && second != -1) {
    for (int i = first + 1; i < second; i++) {
      sum += A[i];
    }
  }
  return sum;
}
