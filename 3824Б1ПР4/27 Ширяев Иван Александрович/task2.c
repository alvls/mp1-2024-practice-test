// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <stddef.h>
long long task2(unsigned A[], size_t n) 
{ 
    if (n < 3) return -1; 
 
    long long min_local = -1; 
 
    for (size_t i = 1; i < n - 1; ++i) 
    { 
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1])   
        { 
            if (min_local == -1 || A[i] < min_local) 
                min_local = A[i]; 
        } 
    } 
    return min_local; 
}
