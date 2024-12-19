// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n)
{
  int last_zero_index = -1;
  int second_last_zero_index = -1;
  for (int i = n - 1; i >= 0; i--) {
      if (A[i] == 0) {
          if (last_zero_index == -1) {
              last_zero_index = i;
          }
          else if (second_last_zero_index == -1) {
              second_last_zero_index = i;
              break;
          }
      }
  }
  int sum = 0;
  for (int i = second_last_zero_index + 1; i < last_zero_index; i++) {
      sum += A[i];
  }
  return sum;
}
