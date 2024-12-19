// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
#include<stdio.h>
int task1(int A[], size_t n)
{
	if (n == 1) return A[0];
	if (n == 0) return -1;
	int mintek = 0;
	for (int i = 1;i < n;i++) {
		if (A[i] < A[mintek]) mintek = i;
	}
	return mintek;
}
