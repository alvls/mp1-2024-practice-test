// Задача 1. Дан непустой массив A, содержащий n *целых* чисел.
// Найти номер его последнего максимального элемента.
#include <stddef.h> // Для определения size_t
int task1(int A[], size_t n) {
    if (n == 0) {
        return -1; // Обработка пустого массива, хотя по условию он всегда непустой
    }

    int max_value = A[0]; 
    int max_index = 0; 

    for (size_t i = 1; i < n; i++) {
        if (A[i] >= max_value) {
            max_value = A[i];
            max_index = i;
        }
    }

    return max_index; //+1 если номер, а не индекс элемента
}
