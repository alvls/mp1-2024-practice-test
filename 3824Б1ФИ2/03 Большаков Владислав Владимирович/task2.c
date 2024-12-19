#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
	size_t count = 0; 
	for (size_t i = 0; i < n; i++) {
		int flag = 0;
		for (size_t j = 0; j < i; j++) {
			if (fabs(A[j] - A[i]) < 1e-10) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
			}
		}
		if (flag == 0) {
			count++;
		}
	}
	size_t res = n - count;
	return res;
}
