// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти количество его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
#include <stdio.h>
#include <stdbool.h>

size_t task2(double A[], size_t n) {
    if (n <= 1) {
        return 0; 
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && n > 1) 
        {
            if (A[i] <= A[i + 1])
                count++;
        }
        else if (i == n - 1 && n > 1) 
        {
            if (A[i] <= A[i - 1])
                count++;
        }
        else if (n > 2) 
        {
            if (A[i] <= A[i - 1] && A[i] <= A[i + 1])
            {
                count++;
            }
        }
        else if (n == 2 && i == 0)
        {
            if (A[i] <= A[i + 1])
            {
                count++;
            }
        }
        else if (n == 2 && i == 1)
        {
            if (A[i] <= A[i - 1])
                count++;
        }

    }
    return count;
}
