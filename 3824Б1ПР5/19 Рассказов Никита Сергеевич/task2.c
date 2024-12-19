// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 2 в массиве.
#include <stdio.h>
#include <stdlib.h>

int task2(unsigned A[], size_t n) {
    if (n == 0) {
        return 0;
    }

    int count = 0;
    unsigned current = A[0];
    size_t run_length = 1;

    for (size_t i = 1; i < n; i++) {
        if (A[i] == current) {
            run_length++;
        }
        else {
            if (run_length == 2) {
                count++;
            }
            run_length = 1;
        }
    }

    if (run_length == 2) {
        count++;
    }

    return count;
}
