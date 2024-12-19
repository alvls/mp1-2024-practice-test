// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <limits.h>
#include <math.h>
#include <stdio.h>

struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
	struct Indices indices = { -2, -2 };
	double min_raz = (double)INT_MAX;
	double e = 1e-10;
	double k;

	n--;
	int i_1, i_2;
	if (n == 1) {
		return { -1, -1 };
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n + 1; j++)
		{
			k = abs(R - A[i] - A[j]);
			if (abs(k - min_raz) < e && i < i_1) 
			{
				continue;
			}
			else {
				if (k - e < min_raz)
				{
					min_raz = k;
					i_1 = i;
					i_2 = j;
				}
			}
		}

	}
	indices = { i_1, i_2 };
	return indices;
}
