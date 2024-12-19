// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
	long long minlm = LLONG_MAX;
	for (int i = 1; i < n - 1; i++) {
		if ((A[i] <= A[i - 1]) && (A[i] <= A[i + 1])) {
			if (A[i] < minlm) {
				minlm = A[i];
			}
		}
	}
	if (minlm == LLONG_MAX) {
		return -1;
	}
	else {
		return minlm;
	}
	return -2;
}
