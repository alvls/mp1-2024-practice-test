// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
int task1(unsigned A[], size_t N)
    if (N == 0) return -1; 
    unsigned min_val = UINT_MAX;
    unsigned max_val = 0;
    size_t first_min_index = N;
    size_t last_max_index = 0;

    for (size_t i = 0; i < N; ++i) {
        if (A[i] < min_val) {
            min_val = A[i];
            first_min_index = i;
        }
    }

    for (size_t i = 0; i < N; ++i) {
        if (A[i] > max_val) {
            max_val = A[i];
            last_max_index = i;
        }
    }

    if (first_min_index == N || last_max_index == N) return -1;

    if (first_min_index < last_max_index) {
        return last_max_index - first_min_index - 1;
    } else {
        return first_min_index - last_max_index - 1;
    }
}
