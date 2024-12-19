#include <limits.h>
#include <stdlib.h>
// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.

size_t find_max(const unsigned* arr, size_t size) {
  size_t index     = ULONG_MAX;
  unsigned int val = 0;

  for (size_t i = 0; i < size; i++) {
    if (arr[i] > val) {
      index = i;
      val   = arr[i];
    }
  }

  return index;
}

size_t find_min(const unsigned* arr, size_t size) {
  size_t index     = ULONG_MAX;
  unsigned int val = INT_MAX;

  for (size_t i = 0; i < size; i++) {
    if (arr[i] <= val) {
      index = i;
      val   = arr[i];
    }
  }

  return index;
}

int task1(unsigned A[], size_t N) {
  size_t max_ind = find_max(A, N);
  size_t min_ind = find_min(A, N);

  size_t start = 0;
  size_t end   = ULONG_MAX;

  if (max_ind < min_ind) {
    start = max_ind;
    end   = min_ind;
  } else {
    start = min_ind;
    end   = max_ind;
  }

  int counter = 0;
  for (size_t i = start + 1; i < end; i++) { counter++; }


  return counter;
}
