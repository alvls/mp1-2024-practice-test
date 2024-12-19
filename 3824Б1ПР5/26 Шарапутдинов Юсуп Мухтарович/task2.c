long long task2(unsigned A[], size_t n) {
    long long max_min = -1; // берем -1, потому что в массиве нет чисел меньше него(числа в insigned всегда положительны)
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) { // Проверка на локальный минимум
            if (max_min == -1 || A[i] > max_min) {
                max_min = A[i]; 
            }
        }
    }
    return max_min;
}
