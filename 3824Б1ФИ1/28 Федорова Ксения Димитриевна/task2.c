// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
#include <stdlib.h>
long long task2(unsigned A[], size_t n)
{
	int max = 0, count;
	int* loc_max = (int*)calloc(n,sizeof(int));

	count = 0;
	for (int i = 1; i < n; i++)
	{
		count++;
		if (A[i] >= A[i - 1]) loc_max[count] = A[i];
	}
	for (int i = 1; i < n; i++)
	{
		count++;
		if (A[i] <= A[i + 1]) loc_max[count] = A[i];
	}

	
	for (int i = 0; i < n; i++)
	{
		if (loc_max[i] >= max) max = loc_max[i];
	}

	if (max != 0) return max;
	else return -1;
	free(loc_max);
}
