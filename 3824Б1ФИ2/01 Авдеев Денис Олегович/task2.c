// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <stdio.h>
#include <math.h>
#include <limits.h>
struct Indices
{
	int first_index;
	int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
	int ind1 = n+1, ind2 = n+1, summa = INT_MAX;
	if (n < 2) {
		struct Indices a = { -1, -1 };
		return a;
	}
	for (size_t i = 0; i < n - 1; i++) {
		for (size_t j = i + 1; j < n; j++) {
			if (abs(A[i] + A[j] - R) < summa) {
				if (i < ind1 && j < ind2) {
					ind1 = i;
					ind2 = j;
					summa = abs(A[i] + A[j] - R);
				}

			}
		}
	}
	struct Indices indices = { ind1, ind2 };
	return indices;
}
