#include <stddef.h> 

int task1(double A[], size_t n)
{
  if (n == 1) {
    return 1;
  }

  for (size_t i = 1; i < n; i++) {
    if (A[i] < A[i - 1]) {
      return 0;
    }
  }

  return 1;
}
