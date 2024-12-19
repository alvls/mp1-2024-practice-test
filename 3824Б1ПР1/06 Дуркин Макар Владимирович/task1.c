// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
size_t task1(int A[], size_t n)
{
  size_t mx = 0;
  if (n == 1)
  	return 0;
  for (size_t i = 0; i < n - 1; i++)
  {
  	if (A[i] < A[i + 1])
  		mx++;
  }
  return mx;
}
