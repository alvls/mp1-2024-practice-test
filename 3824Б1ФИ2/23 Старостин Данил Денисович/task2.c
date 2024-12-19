// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdio.h>
size_t task2(double A[], size_t n)
{
	int found = 0;
	size_t res = 0;
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			if (j != i && A[j] == A[i]) {
				found = 1;
			}
		}
		if (!found) {
			++res;	
		}
		found = 0;
	}
	return res;
}
