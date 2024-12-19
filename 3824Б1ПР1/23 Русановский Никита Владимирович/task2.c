#include <stdio.h>
#include <stdlib.h>
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
int search(double A[], size_t n, double elem) {
	for (size_t i = 0; i < n; i++) if (elem == A[i]) return 1;
	return 0;
}
size_t task2(double A[], size_t n)
{
	double* temp = (double*)malloc(sizeof(double) * n);
	int cntr = 0;
	for (size_t i = 0; i < n; i++) {
		if(search(temp, cntr+1, A[i])==0) {
			cntr += 1;
			temp[cntr] = A[i];
		}
	}
	free(temp);
	return cntr;
}
