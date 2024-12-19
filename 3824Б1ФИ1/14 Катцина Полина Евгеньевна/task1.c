// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
  unsigned max = 0, min = UINT_MAX;
int last_ind = -1;
for (int i = 0; i < N; ++i)
{
	if (A[i] >= max)
	{
		max = A[i];
		last_ind = i;
	}
	if (A[i] <= min)
	{
		min = A[i];
		last_ind = i;
	}
}
return last_ind;
}
