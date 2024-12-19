// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <limits.h>
#include <stdlib.h>
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
    unsigned max_value = 0; 
    int found = 0; 

    for (size_t i = 0; i < n; i++) {
        if (A[i] > a && A[i] < b) { 
            if (!found || A[i] > max_value) { 
                max_value = A[i];
                found = 1; 
            }
        }
    }

    return found ? max_value : 0;
}
