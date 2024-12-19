#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices
{
	int first_index;
	int second_index;
};
struct Indices task2(double A[], size_t n)
{
	struct Indices indices = { 0, 0 };
	int k = 0;
	double mi = 10000;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (fabs(A[j] - A[i]) < mi) {
				mi = fabs(A[i] - A[j]);
				indices.first_index = i;
				indices.second_index = j;
				printf("%d %d %lf\n", i, j, mi);
				k++;
			}
			else if (fabs(A[j] - A[i]) == mi) {
				if (indices.first_index < i) continue;
				else indices.first_index = i;
				if (indices.second_index < j) continue;
				else indices.first_index = j;
				k++;
			}
			printf("%d %d %lf %lf\n", i, j, A[i], A[j]);
		}
		if (k == 0) {
			indices.first_index = -1;
			indices.second_index = -1;
		}
		
	}
	return indices;
}
