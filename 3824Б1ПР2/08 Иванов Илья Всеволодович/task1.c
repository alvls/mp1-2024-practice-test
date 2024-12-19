// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <limits.h>
int task1(int A[], size_t n)
{
	int f = -1;
	int s = -1;
	int sum = 0;
	for (int x = 0; x < n; x++) {
		if (A[x] == 0) {
			f = s;
			s = x;
		}
	}
	for (int x = f; x <= s;x++) {
		sum += A[x];
	}
	return sum;
}
