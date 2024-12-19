// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n)
{
  int min = A[0], min_i = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] <= min) {
      min = A[i];
      min_i = i;
    }
  }
  return min_i;
}
