// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
 #include <stdio.h>
#include <math.h>
#include <limits.h>
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
  int index_1 = n+1, index_2 = n+1, sum = INT_MAX;
  if (n < 2) {
    struct Indices b = { -1, -1 };
    return b;
  }
  for (size_t i = 0; i < n - 1; i++) {
    for (size_t j = i + 1; j < n; j++) {
      if (abs(A[i] + A[j] - R) < sum) {
        if (i < index_1 && j < index_2) {
          index_1 = i;
          index_2 = j;
          sum = abs(A[i] + A[j] - R);
        }
      }
    }
  }
  struct Indices indices = { index_1, index_2 };
  return indices;
}
