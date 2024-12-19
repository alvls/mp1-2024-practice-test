// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вычислить сумму S тех элементов массива, значения которых совпадают с их индексами.
unsigned task1(unsigned A[], size_t n)
{
  size_t summa = 0;
  for (size_t i = 0; i < n; i++) {
	  if (i == A[i]) summa += A[i];
  }
  return summa;
}
