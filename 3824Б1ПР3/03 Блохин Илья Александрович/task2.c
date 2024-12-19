// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
      size_t unique_count = 0;

    for (size_t i = 0; i < n; ++i) {
        int is_unique = 1;
        for (size_t j = 0; j < unique_count; ++j) {
            if (A[i] == A[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            A[unique_count] = A[i]; 
            unique_count++; 
        }
    }
    return unique_count;
}
