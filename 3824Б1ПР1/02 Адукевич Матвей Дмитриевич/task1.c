// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вернуть 1, если его элементы образуют арифметическую прогрессию,
// иначе вернуть 0.
int task1(unsigned A[], size_t n)
{
	if (n == 1) {
		return 0;
	}
	int a = A[1] - A[0];
	int flag = 1;
	for (int i = 0; i < n-1; i++) {
		if (A[i + 1] - A[i] == a) {
			flag = 1;
		}
		else {
			flag = 0;
			return 0;
		}
	}
	return 1;
}
