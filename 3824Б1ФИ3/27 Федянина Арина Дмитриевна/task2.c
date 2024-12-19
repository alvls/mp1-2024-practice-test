// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <limits.h>
long long task2(unsigned A[], size_t n) {
  int loc_min = INT_MAX;
  int flag = 0; 
  if (n < 3) {
        return -1; 
    }
    for (int i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            flag = 1; 
            if (A[i] < loc_min) {
                loc_min = A[i];
            }
        }
    }
    if (flag == 0) {
        return -1;
    }
    else return loc_min;
}
