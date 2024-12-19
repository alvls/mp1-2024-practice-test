// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
    unsigned min = A[0], max = A[0];
    size_t min_idx = 0, max_idx = 0;
    for (size_t i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            min_idx = i;
        }
        if (A[i] > max) {
            max = A[i];
            max_idx = i;
        }
    }
    if (min_idx < max_idx) {
        return min_idx;
    }
    else {
        return max_idx;
    }
}
