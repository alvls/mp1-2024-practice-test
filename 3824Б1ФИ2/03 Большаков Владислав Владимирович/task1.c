#include <stdio.h>
// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вычислить сумму S тех элементов массива, значения которых совпадают с их индексами.
unsigned task1(unsigned A[], size_t n)
{
	unsigned int sum=0;
	for (int i = 0; i < n; i++) {
		if (i == A[i]) {
			sum += A[i];
		}
	}
	return sum;
}
