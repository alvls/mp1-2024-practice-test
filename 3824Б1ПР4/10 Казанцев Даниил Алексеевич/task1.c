// Задача 1. Дан непустой массив A, содержащий n вещественных??? чисел.
// Найти номер его последнего максимального элемента.
int task1(int A[], size_t n)
{  
    int last_max_index = 0;
    int max_value = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] >= max_value) {
            max_value = A[i];
            last_max_index = i;
        }
    }
    return last_max_index;
}
