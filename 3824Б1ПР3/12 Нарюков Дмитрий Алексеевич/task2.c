// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся ровно два раза, на -1.
#include <stdlib.h>
#include <stddef.h>
void task2(int A[], size_t n)
{
    int maxCh = A[0];
    for (size_t i = 1; i < n; i++) {
        if (A[i] > maxCh) {
            maxCh = A[i];
        }
    }

    int *count = (int *)calloc(maxCh + 1, sizeof(int));

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
