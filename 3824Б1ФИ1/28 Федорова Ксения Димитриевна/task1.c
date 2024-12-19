// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n)
{
	int sum = 0, count = 0;
	int ind_1 = 0, ind_2 = 0;
	for (int i = 0; i < n; i++)
	{
		count += (A[i] == 0) ? 1 : 0;
	}

	count++;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == 0) count--;
		
		if (A[i] == 0 && count == 2) ind_1 = i;

		if (A[i] == 0 && count == 1) ind_2 = i;
	}
	
	for (ind_1; ind_1 < ind_2; ind_1++)
	{
		sum += A[ind_1];
	}

	return sum;
}
