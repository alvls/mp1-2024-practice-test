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
	int ind1 = 0, ind2 = 0, summa = INT_MAX;
	if (n < 2) {
		struct Indices a = { -1, -1 };
		return a;
	}
	for (size_t i = n; i > 1; i--) {
		for (size_t j = i - 1; j > 0; j--) {
			if (abs(A[i]+A[j]-R) < summa){
				ind1 = i;
				ind2 = j;
			}
		}
	}
	struct Indices indices = { ind1, ind2 };
	return indices;
}
