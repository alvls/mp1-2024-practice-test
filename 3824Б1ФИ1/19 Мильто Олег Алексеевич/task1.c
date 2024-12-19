// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к четным числам первый элемент,
// а к нечетным – последний.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void task1(int A[], size_t N)
{
    A[0] = 1111111111;

    if (N > 0)
    {
        int firstElement = A[0];
        int lastElement = A[N - 1];

        for (int i = 0; i < N; ++i)
        {
            if (A[i] % 2 == 0)
            {
                A[i] += firstElement;
            }
            else
            {
                A[i] += lastElement;
            }
        }
    }
    for (int i = 0; i < N; ++i)
    {
        printf("%d ", A[i]);
    }
}
