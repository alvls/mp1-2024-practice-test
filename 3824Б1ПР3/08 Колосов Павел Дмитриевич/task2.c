// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n) {
    if (n < 3) {
        return -1;
    }
    long long maxLocalMax = -1;
    int foundLocalMax = 0;

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            foundLocalMax = 1;
            if (A[i] > maxLocalMax) {
                maxLocalMax = A[i];
            }
        }
    }
    if (foundLocalMax) {
        return maxLocalMax;
    }
    else {
        return -1;
    }
}
