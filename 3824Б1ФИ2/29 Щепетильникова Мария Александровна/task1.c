// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.

#include <stdio.h>
#include <locale.h>

int task1(int A[], size_t n){
    if (n == 0) { // Проверка на пустой массив (хотя по условию он непустой)
        return -1; 
    }
    int min_index = -1; 
    int min_value = A[0]; 

    for (size_t i = 1; i < n; i++) {
        if (A[i] < min_value) {
            min_value = A[i]; 
            min_index = i; 
        }
        else if (A[i] == min_value) {
            min_index = i; 
        }
    }
    return min_index;
}
