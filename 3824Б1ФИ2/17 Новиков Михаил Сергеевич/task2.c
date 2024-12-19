// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Заменить элементы во всех сериях длины 2 на число 0.

#include <stdio.h>

void task2(unsigned A[], size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1]) {
            if (i + 2 >= n || A[i] != A[i + 2]) {
                A[i] = 0;
                A[i + 1] = 0;
                i++;
            } 
            else {
                while (i + 1 < n && A[i] == A[i + 1]) {
                    i++;
                }
            }
        }
    }
}
