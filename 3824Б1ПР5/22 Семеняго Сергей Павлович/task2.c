// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices task2(double A[], size_t n)
{
  struct Indices indices = {-1, -1};

  if (n < 2) {
    return indices; // Если массив содержит меньше двух элементов, возвращаем {-1, -1}
  }

  double min_diff = A[1] - A[0];
  if (min_diff < 0) {
    min_diff = -min_diff;
  }
  indices.first_index = 0;
  indices.second_index = 1;

  for (size_t i = 0; i < n; ++i) {
    for (size_t j = i + 1; j < n; ++j) {
      double diff = A[j] - A[i];
      if (diff < 0) {
        diff = -diff;
      }
      if (diff < min_diff) {
        min_diff = diff;
        indices.first_index = i;
        indices.second_index = j;
      }
    }
  }

  return indices;
}
