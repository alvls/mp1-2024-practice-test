// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
#include <limits.h>

int task1(int A[], size_t n)
{
  int a_min = INT_MAX;
  for (int i = 0; i < n; i++) {
  	if (A[i] < a_min) a_min = A[i];
  }
  
  for (int i = n - 1; i >= 0; i--) {
  	if (A[i] == a_min) return i + 1;
  }
}
