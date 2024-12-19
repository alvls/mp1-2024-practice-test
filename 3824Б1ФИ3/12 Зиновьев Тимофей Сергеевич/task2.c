// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся ровно два раза, на -1.
#include <stdio.h>
#include <stdlib.h>
void task2(int A[], size_t n)
{
    int* count;
    count = (int*)malloc(n * sizeof(int));
    for (size_t i = 0; i < n; i++) {
        count[i] = 0;
    }
    for (size_t i = 0; i < n; i++) { 
        count[A[i]]++;
    }

    for (size_t i = 0; i < n; i++) {
        if (count[A[i]] == 2) {
            A[i] = -1;
        }
    }
    free(count);
}
