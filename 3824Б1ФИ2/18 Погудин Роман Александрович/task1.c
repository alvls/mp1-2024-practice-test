// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
#include <stdio.h>
#include <stdlib.h>
int* task1(int A[], size_t N)
{
    int* result = (int*)malloc(N * sizeof(int));
    if (!result) return NULL;

    size_t even_idx = 0;
    size_t odd_idx = N / 2 + N % 2;

    for (size_t i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
            result[even_idx++] = A[i];
        else
            result[odd_idx++] = A[i];
    }

    return result;
}
