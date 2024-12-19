#include <stdio.h>

size_t task1(int A[], size_t n) {
  size_t count = 0;
  for (size_t i = 0; i < n - 1; i++) {
    if (A[i] < A[i + 1]) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {1, 5, 2, 8, 3, 9, 4};
  size_t n = sizeof(arr) / sizeof(arr[0]);
  printf("Количество чисел меньше правого соседа: %zu\n", task1(arr, n)); 

  int arr2[] = {9, 8, 7, 6, 5, 4, 3};
  n = sizeof(arr2) / sizeof(arr2[0]);
  printf("Количество чисел меньше правого соседа: %zu\n", task1(arr2, n)); 

  int arr3[] = {1};
  n = sizeof(arr3) / sizeof(arr3[0]);
  printf("Количество чисел меньше правого соседа: %zu\n", task1(arr3, n)); 

  int arr4[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
  n = sizeof(arr4) / sizeof(arr4[0]);
  printf("Количество чисел меньше правого соседа: %zu\n", task1(arr4, n)); 

  return 0;
}
