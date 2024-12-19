#include <limits.h>

int task1(unsigned A[], size_t N) {
    if (N == 0) return -1; // Проверка на пустой массив

    int first_max_index = -1;
    int last_min_index = -1;
    unsigned max_value = 0;
    unsigned min_value = UINT_MAX;

    // Поиск первого максимального и последнего минимального элемента
    for (size_t i = 0; i < N; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
            first_max_index = i; // Запоминаем индекс первого максимального
        }
        if (A[i] < min_value) {
            min_value = A[i];
            last_min_index = i; // Запоминаем индекс последнего минимального
        }
    }

    // Проверка порядка индексов
    if (first_max_index < last_min_index) {
        return last_min_index - first_max_index - 1; // Количество элементов между
    } else {
        return 0; // Если порядок не соблюден, возвращаем 0
    }
}
