// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
	size_t ind = 0;
	unsigned mn = A[0];
	unsigned mx = A[0];
	for (size_t i = 1; i < N; i++)
	{
		if (A[i] <= mn)
		{
			mn = A[i];
			ind = i;
		}
		if (A[i] >= mx)
		{
			mx = A[i];
			ind = i;
		}
	}
	return ind;
}
