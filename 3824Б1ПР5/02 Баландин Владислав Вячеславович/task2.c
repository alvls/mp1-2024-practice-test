// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices
{
  int first_index;
  int second_index;
};

#include <math.h>

#include <stddef.h>

struct Indices task2(double A[], size_t n)
{
  struct Indices result;

  if (n < 2)
  {
    result.first_index = -1;
    result.second_index = -1;
    return result;
  }

  int k1 = 0;
  int k2 = 1;
  double min_distance = fabs(A[1] - A[0]);

  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = i + 1; j < n; j++)
    {
      const double current_distance = fabs(A[j] - A[i]);

      const double EPSILON = 1e-10;

      if (current_distance < min_distance - EPSILON ||
          (fabs(current_distance - min_distance) < EPSILON && i < (size_t)k1))
      {
        min_distance = current_distance;
        k1 = i;
        k2 = j;
      }
    }
  }

  result.first_index = k1;
  result.second_index = k2;
  return result;
}