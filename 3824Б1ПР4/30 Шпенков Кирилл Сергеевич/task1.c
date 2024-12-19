// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <stdio.h>
#include <stddef.h>

int task1(int A[], size_t n)
{
    if (n == 0) return -1;

    int max_value = A[0];

    for (size_t i = 1; i < n; i++)
    {
        if (A[i] > max_value)
        {
            max_value = A[i];
        }
    }

    for (size_t i = n; i > 0; i--)
    {
        if (A[i - 1] == max_value)
        {
            return (int)(i - 1);
        }
    }

    return -1;
}
