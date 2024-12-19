#include <stdio.h>
// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
int task1(int A[], size_t n)
{
	int element = 0;
	for (size_t i = 0; i < n - 1; i++)
	{
		if (A[element] < A[i + 1] || A[element] ==  A[i + 1])
		{
			element = i + 1;
		}
	}
	return element + 1;
}
