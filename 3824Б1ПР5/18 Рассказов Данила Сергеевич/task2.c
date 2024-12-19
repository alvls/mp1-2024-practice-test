// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Заменить элементы во всех сериях длины 3 на число 0.
#include <stdio.h>
#include <stdlib.h>
void task2(unsigned A[], size_t n) {
    if (A == NULL || n == 0) {
        return;
    }

    unsigned current = A[0];
    size_t start = 0;
    size_t count = 1;

    for (size_t i = 1; i < n; i++) {
        if (A[i] == current) {
            count++;
        } else {
            if (count == 3) {
                for (size_t j = start; j < start + count; j++) {
                    A[j] = 0;
                }
            }
            current = A[i];
            start = i;
            count = 1;
        }
    }

    if (count == 3) {
        for (size_t j = start; j < start + count; j++) {
            A[j] = 0;
        }
    }
}
