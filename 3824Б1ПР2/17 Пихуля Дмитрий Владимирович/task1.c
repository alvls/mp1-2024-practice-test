// Задача 1. Дан непустой массив A из N элементов.
// Переставить его элементы в обратном порядке.
#include <stdlib.h>
void task1(int A[], size_t N)
{
	int temp = 0;

	for (int i = 0, j = N-1; i < N / 2 || j > N / 2; i++, j--) {
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}
