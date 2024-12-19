#include <stddef.h>
#include <stdlib.h>
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся ровно два раза, на -1.
void task2(int A[], size_t n)
{
	int mx = 0;
	for(int i = 0; i < n; ++i)
		mx = (mx > A[i]) ? mx : A[i];
	int* counts = (int*)(malloc(mx * sizeof(int)));
	for(int i = 0; i < n; ++i) ++counts[A[i] - 1];
	
	for(int i = 1; i <= mx; ++i)
	{
		if(counts[i - 1] == 2)
		{
			for(int j = 0; j < n; ++j)
			{
				if(A[j] == i) A[j] = -1;
			}
		}
	}
}
