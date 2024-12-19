// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.

#include <stdio.h>
#include <stddef.h>

int task1(int A[], size_t n)
{
    int lastZeroIndex = -1;
    int secondLastZeroIndex = -1;

    // Находим индексы последних двух нулей
    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            secondLastZeroIndex = lastZeroIndex;
            lastZeroIndex = (int)i;
        }
    }

    // Если не найдены два нуля, возвращаем -1111111111
    if (secondLastZeroIndex == -1 || lastZeroIndex == -1) {
        return -1111111111;
    }

    // Вычисляем сумму элементов между последними двумя нулями
    int sum = 0;
    for (size_t i = secondLastZeroIndex + 1; i < (size_t)lastZeroIndex; i++) {
        sum += A[i];
    }

    return sum;
}

int main() {
    int A[] = { 1, 2, 4, 5, 3, 0 };  // Пример без двух нулей
    size_t n = sizeof(A) / sizeof(A[0]);

    int result = task1(A, n);

    if (result == -1111111111) {
        printf("Two zeros not found in the array.\n");
    }
    else {
        printf("Sum between the last two zeros: %d\n", result);
    }

    return 0;
}
