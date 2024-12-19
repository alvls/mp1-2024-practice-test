// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdio.h>
#include <stdbool.h>

// Функция для определения количества различных элементов массива
size_t task2(double A[], size_t n)
{
    size_t uniqueCount = 0;

    for (size_t i = 0; i < n; i++) {
        bool isUnique = true;

        // Проверяем, встречался ли элемент раньше
        for (size_t j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueCount++;
        }
    }

    return uniqueCount;
}
