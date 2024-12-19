// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
#include <stddef.h>

void task2(int A[], size_t n) {
    if (n == 0) {
        return; // Если массив пустой, ничего не делаем
    }

    int frequency[1001] = {0};

    for (size_t i = 0; i < n; i++) {
        frequency[A[i]]++;
    }

    for (size_t i = 0; i < n; i++) {
        if (frequency[A[i]] < 2) {
            A[i] = -1;
        }
    }
}
