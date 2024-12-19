// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Заменить элементы во всех сериях длины 3 на число 0.
#include <stdio.h>
void task2(unsigned A[], size_t n)
{
    if (n < 3)
        return;

    size_t count = 1;

    for (size_t i = 1; i < n; ++i) 
    {
        if (A[i] == A[i - 1]) 
        {
            ++count;
        } 
        else 
        {
            if (count == 3) 
            {
                for (size_t j = i - count; j < i; ++j) 
                {
                    A[j] = 0;
                }
            }
            count = 1;
        }
    }

    if (count == 3) 
    {
        for (size_t j = n - count; j < n; ++j) 
        {
            A[j] = 0;
        }
    }
}
