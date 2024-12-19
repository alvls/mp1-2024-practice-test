#include <stdio.h>
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
void task2(int A[], size_t n)
{
	int element = A[0], count = 0;
	for (size_t i = 0; i < n; i++)
	{
		count = 0;
		element = A[i];
		for (size_t j = 0; j < n; j++)
		{
			if (A[i] == A[j])
			{
				count++;
			}
		}
		if (count < 2)
		{
			A[i] = -1;
		}
	}
}
