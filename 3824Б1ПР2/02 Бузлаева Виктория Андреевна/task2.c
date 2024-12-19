// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <math.h>

struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(double A[], size_t n)
{
  struct Indices indices = { -1, -1 };

	if (n < 2) return indices;

  double min_distance = fabs(A[1] - A[0]);
  indices.first_index = 1;
  indices.second_index = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double distance = fabs(A[i] - A[j]);
      if (distance < min_distance) {
        min_distance = distance;
        indices.first_index = i;
        indices.second_index = j;
      }
    }
  }

  return indices;
}
