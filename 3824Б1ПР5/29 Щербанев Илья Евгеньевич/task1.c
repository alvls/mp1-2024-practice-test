// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
#include <algorithm>

int task1(int A[], size_t n)
{
    if (n == 0) {
        return -1; // Массив пустой
    }
    
    int min_value = A[0];
    int min_index = 0;
    
    for (size_t i = 1; i < n; ++i) {
        if (A[i] <= min_value) { // Если нашли новый минимум или равный ему
            min_value = A[i];    // Обновляем значение минимума
            min_index = i;       // Запоминаем индекс нового минимума
        }
    }
    
    return min_index;
}
