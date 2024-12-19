// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий в массиве.
int task2(unsigned A[], size_t n) {
    if (n < 2) {
        return 0;
    }
    int series_count = 0, i = 0;
    while (i < n) {
        int series_length = 1;
        while (i + 1 < n && A[i] == A[i + 1]) {
            series_length++;
            i++;
        }
        if (series_length >= 2) {
            series_count++;
        }
        i++;
    }
    return series_count;
}
