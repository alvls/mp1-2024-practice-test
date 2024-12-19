// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наименьшей серии.

#include <stdlib.h>

int task2(unsigned A[], size_t n)
{
    if (n == 0) 
    {
        return 0; // Если массив пуст (но по условию массив непустой), возвращаем 0
    }

    size_t min_series_length = UINT_MAX; // Инициализируем самое маленькое значение максимально возможным
    size_t current_series_length = 1;

    for (size_t i = 1; i < n; i++) 
    {
        if (A[i] == A[i - 1]) 
        {
            current_series_length++;
        }
        else 
        {
            
            if (current_series_length < min_series_length) 
            {
                min_series_length = current_series_length;
            }
            current_series_length = 1;
        }
    }

    if (current_series_length < min_series_length) 
    {
        min_series_length = current_series_length;
    }

    return (int)min_series_length;
}
