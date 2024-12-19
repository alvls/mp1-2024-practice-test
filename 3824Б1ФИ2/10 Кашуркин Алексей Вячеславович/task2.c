// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
#include <stdio.h>
void task2(int A[], size_t n)
{
    if (n == 0) return;
    int counts[10001] = {0}; 
    for (size_t i = 0; i < n; i++)
    {
        counts[A[i]]++;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (counts[A[i]] < 2)
        {
            A[i] = -1;
        }
    }
}
