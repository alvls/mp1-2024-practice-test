// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
#include <stdio.h>
#include <stddef.h>

void task2(int A[], size_t n) {
    int frequency[10001] = {0};

    for (size_t i = 0; i < n; ++i) {
        frequency[A[i]]++;
    }

    for (size_t i = 0; i < n; ++i) {
        if (frequency[A[i]] < 2) {
            A[i] = -1;
        }
    }
}
