// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
#include <stdio.h> 

int task1(int A[], size_t n) {
    if (n == 0) {
        return -1; 
    }

    int min_index = 0; 
    for (size_t i = 1; i < n; i++) {
        if (A[i] <= A[min_index]) { 
            min_index = i;         
        }
    }

    return min_index;
}
