// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наименьшей серии.
int task2(unsigned A[], size_t n)
{
  int minlength = INT_MAX;
int length = 1;
for (int i = 0; i < n-1; i++)
{
	if (A[i] == A[i + 1])
	{
		length++;
	}
	else
	{
		if (length < minlength)
		{
			minlength = length;
		}
		length = 1;
	}
}
if (length < minlength)
{
	minlength = length;
}
return minlength;
}
