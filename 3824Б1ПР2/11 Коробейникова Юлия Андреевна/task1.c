// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <limits.h>
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
  unsigned min_value = 0; // изначально 0, если требуемые элементы отсутствуют
  for (size_t i = 0; i < n; i++) {
    if (A[i] > a && A[i] < b) {
      if (min_value == 0 || A[i] < min_value) {
        min_value = A[i];
       }
    }
   }
  return min_value; // вернется 0, если нет требуемых элементов
// return -1;
}
