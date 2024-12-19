// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
  int i;
  int flag = 0;
  long long int sum = 0;
  for (i = 0; i < n; ++i)
  {
    if (A[i] == 0 && flag == 0)
      flag = 1;
    else if (A[i] != 0 && flag == 1)
      sum += (long long int) A[i];
    else if (A[i] == 0 && flag == 1)
      flag = 2;
  }
  return sum;
}
