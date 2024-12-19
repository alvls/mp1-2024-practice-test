// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
	int first_zero_ind = -1;
	int second_zero_ind = -1;
	int sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (A[i] == 0)
		{
			if (first_zero_ind == -1)
			{
				first_zero_ind = i;
			}
			else
			{
				second_zero_ind = i;
				break;
			}
		}
	}
	if (second_zero_ind == -1)
	{
		return -1;
	}
	for (size_t i = first_zero_ind + 1; i < second_zero_ind; i++)
	{
		sum += A[i];
	}
	return sum;
}
