// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <limits.h>
#include <stdio.h>
int task1(int A[], size_t n) {
    int num = -1; 
    int max_elem = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (A[i] > max_elem) {
            max_elem = A[i];
            num = i; 
        }
        else if (A[i] == max_elem) {
            num = i; 
        }
    }
    return num;
}
