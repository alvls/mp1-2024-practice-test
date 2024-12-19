// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <math.h>
struct Indices
{
	int first_index;
	int second_index;
};
struct Indices task2(double A[], size_t n)
{
	struct Indices indices = { -1, -1 };
	int a;
	double min_razn = fabs(A[1]-A[0]);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			a = fabs(A[i] - A[j]);
			if (a < min_razn) {
				struct Indices indices = { i, j };
			}

		}
	}
	return indices;
}
