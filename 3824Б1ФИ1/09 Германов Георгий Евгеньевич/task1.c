// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n) {
    int min = A[0];
    int last_min_index = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] <= min) {
            min = A[i];
            last_min_index = i;
        }
    }

    return last_min_index;
}
