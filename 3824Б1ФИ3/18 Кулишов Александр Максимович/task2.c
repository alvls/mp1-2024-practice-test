// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Заменить элементы во всех сериях длины 3 на число 0.
#include <stdio.h>

void task2(unsigned A[], size_t n) {
    for (int i = 0; i < n - 2; i++) {
        if (A[i] == A[i + 1] && A[i] == A[i + 2]) {
            A[i] = 0;
            A[i + 1] = 0;
            A[i + 2] = 0;
        }
    }
}
