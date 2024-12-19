// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.

#include <stdlib.h>

int task1(unsigned A[], size_t N)
{
    if (N == 0) {
        return -1; 
    }

    unsigned min_val = A[0]; 
    unsigned max_val = A[0];
    int last_extreme_index = 0;

    for (size_t i = 1; i < N; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
            last_extreme_index = i;
        }
        if (A[i] > max_val) {
            max_val = A[i];
            last_extreme_index = i;
        }
    }

    return last_extreme_index;
}
