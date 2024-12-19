// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.
size_t task1(int A[], size_t n)
{
	if (n < 2) {
		return 0;
	}
	size_t count = 0;
	for (int i = 0; i < n-1; i++) {
		if (A[i] < A[i + 1]) {
			count += 1;
		}
	}
	return count;
}
