// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.
#include <stddef.h>

int task2(unsigned A[], size_t n) {
    if (n == 0) {
        return 0;
    }

    unsigned max_length = 1; 
    unsigned current_length = 1;  

    for (size_t i = 1; i < n; i++) {
        if (A[i] == A[i - 1]) {
            current_length++; 
        } else {
            if (current_length > max_length) {
                max_length = current_length; 
            }
            current_length = 1; 
        }
    }

    if (current_length > max_length) {
        max_length = current_length;
    }

    return max_length; 
}
