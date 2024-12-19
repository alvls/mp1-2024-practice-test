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

struct Indices task2(double A[], size_t n)
{
  if (n < 2) {
    return (struct Indices){-1, -1};
  }

  struct Indices indices = {-1, -1};
  double min_distance = 2e9;

  for (size_t i = 0; i < n; ++i) {
    for (size_t j = i + 1; j < n; ++j) {
      double distance = A[i] - A[j];
      if (distance < 0) {
        distance = -1 * distance;
      }
      if (distance < min_distance) {
        min_distance = distance;
        indices.first_index = i;
        indices.second_index = j;
      }
    }
  }

  return indices;
}