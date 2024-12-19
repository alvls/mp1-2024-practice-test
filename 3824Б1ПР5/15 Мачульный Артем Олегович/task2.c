// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов,
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти число серий в массиве.

int task2(unsigned A[], size_t n)
{
    if (n == 0) return 0;

    int seriesCount = 1; // Начинаем с одной серии

    for (size_t i = 1; i < n; ++i) {
        if (A[i] != A[i - 1]) {
            ++seriesCount;
        }
    }

    return seriesCount;
}
