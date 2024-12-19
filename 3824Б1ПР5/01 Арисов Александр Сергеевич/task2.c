#include <math.h>
#include <float.h>
#include <stddef.h>

struct Indices {
  int first_index;
  int second_index;
};

struct Indices task2(int A[], size_t n, double R) {
  struct Indices indices = {-1, -1};
  double closest_diff = DBL_MAX;
  if (n < 2) {
    return indices;
  }

  for (size_t i = 0; i < n - 1; i++) {
    for (size_t j = i + 1; j < n; j++) {
      double current_sum = A[i] + A[j];
      double current_diff = fabs(current_sum - R);
      if (current_diff < closest_diff ||
          (current_diff == closest_diff && (i < indices.first_index || (i == indices.first_index && j < indices.second_index)))) {
        indices.first_index = i;
        indices.second_index = j;
        closest_diff = current_diff;
          }
    }
  }

  return indices;
}
