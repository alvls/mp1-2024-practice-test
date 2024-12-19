// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <stdio.h>
#include <limits.h>

int task1(unsigned A[], size_t n, unsigned a, unsigned b) {
    unsigned min = UINT_MAX; //min value make max for unsigned

    
    for (size_t i = 0; i < n; i++) {
        if (A[i] > a && A[i] < b) {
            if (A[i]<min){
                min = A[i];
            }
        }
    }
    if (min == UINT_MAX) {
        return 0; 
    }
    return min;
}
