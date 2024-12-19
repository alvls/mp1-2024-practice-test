// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.

int task1(int A[], size_t n)
{
	int ind = 0;
	int tmp = A[0];

	for (int i = 0; i < n; i++) {
		if (A[i] >= tmp) {
			tmp = A[i];
			ind = i;
		}
	}
	return ind;
}
