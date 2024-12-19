// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.

size_t task1(int A[], size_t n) {
    if (n == 0) {
        return 0;
    }

    size_t count_of_left = 0;

    for (size_t i = 1; i < n; i++) {
        if (A[i] < A[i - 1]) { 
            count_of_left++;
        }
    }
    return count_of_left; 
}
