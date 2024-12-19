// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.
#include <stdio.h>
#include <limits.h>

int task1(unsigned A[], size_t N) {
    if (N == 0) {
        return -1;
    }

    int first_max_index = -1; 
    int last_min_index = -1; 
    unsigned max_value = 0;   
    unsigned min_value = UINT_MAX;

    for (size_t i = 0; i < N; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
            first_max_index = i;
        }
        if (A[i] <= min_value) {
            min_value = A[i];
            last_min_index = i;
        }
    }

    if (first_max_index == -1 || last_min_index == -1) {
        return -1;
    }

    if (first_max_index > last_min_index) {
        return 0;
    }

    return last_min_index - first_max_index - 1;
}
