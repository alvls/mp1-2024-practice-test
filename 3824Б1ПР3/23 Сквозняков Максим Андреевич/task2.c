// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
  int count = 0;
double tmp;
for (int i = 0; i < n - 1; i++)
{
	for (int j = 0; j < n - i - 1; j++)
	{
		if (A[j] > A[j + 1])
		{
			tmp = A[j + 1];
			A[j + 1] = A[j];
			A[j] = tmp;
		}
	}
}
for (int i = 0; i < n; i++)
{
	if ((A[i] != A[i + 1]))
	{
		count++;
	}
}
return count;
}
