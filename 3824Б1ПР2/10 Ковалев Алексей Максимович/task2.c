// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
#include <stdlib.h> // Для malloc, free и size_t
void task2(int A[], size_t n) {
    if (n == 0) {
        return; // Обработка пустого массива, хотя по условию он всегда непустой
    }

    int* counts = (int*)calloc(n, sizeof(int));

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (A[i] == A[j]) {
                counts[i]++;
            }
        }
    }

    for (size_t i = 0; i < n; i++) {
        if (counts[i] < 2) {
            A[i] = -1;
        }
    }

    free(counts);
}
