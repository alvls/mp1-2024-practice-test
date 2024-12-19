// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.
#include <stdio.h>
#include <limits.h>
int task1(unsigned A[], size_t N) {
    unsigned max_val = 0;
    unsigned min_val = UINT_MAX;
    size_t first_max_index = -1;
    size_t last_min_index = -1;

    for (size_t i = 0; i < N; i++) {
        if (A[i] > max_val) {
            max_val = A[i];
            first_max_index = i;
        }
        if (A[i] <= min_val) {
            min_val = A[i];
            last_min_index = i;
        }
    }
    if (first_max_index < last_min_index) {
        return last_min_index - first_max_index - 1;
    }
    else {
        return first_max_index - last_min_index - 1;
    }
    return -1;
}
