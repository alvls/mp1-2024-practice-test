
#include <stdio.h>
// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.
size_t task1(int A[], size_t n)
{
	size_t cnt = 0;
	for (size_t i = 1; i < n; i++) {
		if (A[i] < A[i - 1]) {
			cnt++;
		}
	}
	return cnt;
}
