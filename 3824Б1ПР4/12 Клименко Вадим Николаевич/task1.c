// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.

#include <limits.h>

int task1(unsigned A[], size_t n, unsigned a, unsigned b) {
  int max_val = INT_MIN;

  for (size_t i = 0; i < n; ++i) {
    if (A[i] > a && A[i] < b) {
      max_val = (max_val > (int)A[i]) ? max_val : (int)A[i]; 
    }
  }

  return (max_val == INT_MIN) ? 0 : max_val;
}
