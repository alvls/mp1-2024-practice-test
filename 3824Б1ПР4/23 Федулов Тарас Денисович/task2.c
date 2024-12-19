// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdio.h>
#include <stdlib.h>

size_t task2(double A[], size_t n) 
{
    double unique[100];
    size_t uniqueCount = 0;
    for (size_t i = 0; i < n; i++) 
    {
        int found = 0;
        for (size_t j = 0; j < uniqueCount; j++) 
        {
            if (A[i] == unique[j]) 
            {
                found = 1;
                break;
            }
        }
        if (found == 0) 
        {
            unique[uniqueCount] = A[i];
            uniqueCount++;
        }
    }
    return uniqueCount;
}
