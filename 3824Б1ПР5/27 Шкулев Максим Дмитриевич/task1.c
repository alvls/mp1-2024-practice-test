#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int task1(int* A, size_t n) {
    int first_zero_index = -1;
    int second_zero_index = -1;

    // Находим индексы первых двух нулей
    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i; // Запоминаем первый ноль
            }
            else if (second_zero_index == -1) {
                second_zero_index = i; // Запоминаем второй ноль
                break; // Достигли второго нуля, выходим из цикла
            }
        }
    }

    // Если не нашли два нуля, возвращаем -1
    if (first_zero_index == -1  second_zero_index == -1  second_zero_index <= first_zero_index + 1) {
        printf("Не удалось найти два нуля с элементами между ними.\n");
        return -1;
    }

    // Считаем сумму элементов между первыми двумя нулями
    int sum = 0;
    for (size_t i = first_zero_index + 1; i < second_zero_index; i++) {
        sum += A[i];
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    size_t n;

    // Запрашиваем у пользователя размер массива
    printf("Введите размер массива: ");
    scanf_s("%zu", &n);

    // Проверяем, что размер положительный
    if (n == 0) {
        printf("Размер массива должен быть больше нуля.\n");
        return 1;
    }

    // Выделяем память для динамического массива
    int* A = (int*)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Запрашиваем у пользователя элементы массива
    printf("Введите элементы массива:\n");
    for (size_t i = 0; i < n; i++) {
        scanf_s("%d", &A[i]);
    }

    int result = task1(A, n);

    if (result != -1) {
        printf("Сумма элементов между первыми двумя нулями: %d\n", result);
    }

    // Освобождаем выделенную память
    free(A);

    return 0;
}
