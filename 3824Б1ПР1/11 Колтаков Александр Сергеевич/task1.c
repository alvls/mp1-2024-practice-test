// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
  unsigned min_e = b;
  for (int i = 0; i < n; i++) {
	  if ((A[i] > a) && (A[i] < b))
		  if (A[i] < min_e) min_e = A[i];
  }
  if (min_e != b) return min_e;
  else return 0;
}
