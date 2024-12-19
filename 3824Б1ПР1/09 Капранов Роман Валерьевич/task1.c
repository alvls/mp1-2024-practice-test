// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n)
{
  int min;
  int mini;
  min = A[0];
  mini = 0;
  for (int i = 0; i < n; i++)
  {
	  if (A[i] <= min)
	  {
		  min = A[i];
		  mini = i;
	  }
  }
  return mini;
}
