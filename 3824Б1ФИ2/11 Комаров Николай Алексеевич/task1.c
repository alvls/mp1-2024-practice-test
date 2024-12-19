// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <stdio.h>
#include <limits.h>
int task1(unsigned A[], size_t n, unsigned a, unsigned b) {
    unsigned min_element = UINT_MAX;
    for (size_t i = 0; i < n; i++) {
        if (A[i] > a && A[i] < b) {
            if (A[i] < min_element) {
                min_element = A[i];
            }
        }
    }
    return (min_element == UINT_MAX) ? 0 : min_element;
}
