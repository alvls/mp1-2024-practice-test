// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
    for (int i = 1; i < n - 1; i++) { 
        int minLocalMax = -1;
        for (int i = 1; i < n - 1; i++) {
            if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
                if (minLocalMax == -1 || A[i] < minLocalMax) {
                    minLocalMax = A[i];
                }
            }
        }

        return minLocalMax;
    }
  return -2
}
