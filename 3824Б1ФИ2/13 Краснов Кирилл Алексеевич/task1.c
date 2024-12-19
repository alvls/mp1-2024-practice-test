// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
#include <stdio.h>
int task1(unsigned A[], size_t N)
{
    int min = 0;
    int max = 0;
    for (size_t i = 1; i < N; i++) {
        if (A[i] < A[min]) {
            min = i;
        }
        if (A[i] > A[max]) {
            max = i;
        }
    }
    return (min < max) ? min : max;
}