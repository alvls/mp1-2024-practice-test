// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <stdio.h>
int task1(unsigned A[], size_t n, unsigned a, unsigned b) {
    int max = -1;
    if (n<b)b=n;
    for (size_t i = a+1; i < b-1; i++) {
        if (A[i]>max)max = A[i];
    }
    return max!=-1?max:0;
}
