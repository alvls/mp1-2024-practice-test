// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.

int task1(unsigned A[], size_t N)
{
    if (N == 0) return 0;

    size_t firstMinIndex = 0;
    size_t lastMaxIndex = 0;

    // Найти индексы первого минимального и последнего максимального элементов
    for (size_t i = 0; i < N; ++i) {
        if (A[i] < A[firstMinIndex]) {
            firstMinIndex = i;
        }
        if (A[i] >= A[lastMaxIndex]) {
            lastMaxIndex = i;
        }
    }

    // Проверяем порядок индексов
    if (firstMinIndex >= lastMaxIndex) {
        return 0;
    }

    // Количество элементов между ними
    return static_cast<int>(lastMaxIndex - firstMinIndex - 1);
}
