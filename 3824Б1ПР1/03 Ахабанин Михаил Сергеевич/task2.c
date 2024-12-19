// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
	size_t cnt = 0, fl = 1;
	for (size_t i = 0; i < n; i++) {
		fl = 1;
		for (size_t j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				fl = 0;
				break;
			}
		}
		if (fl) { 
			cnt += 1; 
		}
	}
	return cnt;
}
