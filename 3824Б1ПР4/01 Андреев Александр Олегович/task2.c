#include <limits.h>
#include <math.h>

struct Indices {
  int first_index;
  int second_index;
};

struct Indices task2(int A[], size_t n, double R) {
  struct Indices indices = {-1, -1}; // Инициализируем с {-1, -1}
  double min_diff = INFINITY;       // Инициализируем минимальную разницу бесконечностью

  for (size_t i = 0; i < n; i++) {
    for (size_t j = i + 1; j < n; j++) {
      double sum = A[i] + A[j];
      double diff = fabs(sum - R); // Используем fabs для абсолютного значения разницы

      if (diff < min_diff) {
        min_diff = diff;
        indices.first_index = i;
        indices.second_index = j;
      }
    }
  }

  return indices;
}
