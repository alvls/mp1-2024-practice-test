// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
	unsigned max = 0;
	
	for (size_t i = 0; i < n; i++) {
		if ((A[i] > a) && (A[i] < b)) {
			if (A[i] > max) {
				max = A[i];
			}
		}
	}
	return max;
}
