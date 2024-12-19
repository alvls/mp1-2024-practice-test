// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <limits.h>
long long task2(unsigned A[], size_t n)
{
	int max = -1;
	for (int x = 1; x <= n - 1;x++) {
		if (A[x] >= A[x - 1] & A[x] >= A[x + 1]) {
			if (A[x] > max) {
				max = A[x];
			}
		}
	}
	return max;
}
