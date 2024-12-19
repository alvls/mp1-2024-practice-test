// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <limits.h>
int task1(int A[], size_t n)
{
    if (n == 0) {
        return -1;
    }
    int max_element = INT_MIN;
    int max_index = -1;

    for (size_t i = 0; i < n; ++i) {
        if (A[i] >= max_element) {
            max_element = A[i];
            max_index = i;
        }
    }
    return max_index;
}
