#include <stdlib.h>
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
void task2(int A[], size_t n)
{
   int max_value = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
        }
    }
    int* counts = (int*)calloc(max_value + 1, sizeof(int));
    if (!counts) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        counts[A[i]]++;
    }    
    for (int i = 0; i < n; i++) {
        if (counts[A[i]] < 2) {
            A[i] = -1;
        }
    }
    free(counts);
}
