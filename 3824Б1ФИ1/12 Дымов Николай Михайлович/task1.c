#include <stddef.h>
// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
    int i;
    unsigned mx = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a < A[i] && A[i] < b)
            mx = (A[i] > mx) ? A[i] : mx;
    }
    return mx;
}
