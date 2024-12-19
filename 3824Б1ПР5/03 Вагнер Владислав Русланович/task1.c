#include <stdio.h>
#include <stdlib.h> // Для malloc и free
#include <locale.h>

unsigned task1(unsigned A[], size_t n) {
    unsigned S = 0; // Переменная для хранения суммы
    for (size_t i = 0; i < n; ++i) {
        if (A[i] == i) { // Если значение элемента совпадает с индексом
            S += A[i];
        }
    }
    return S; // Возвращаем результат
}


    setlocale(LC_ALL, "RUSSIAN");
    size_t n;
    printf("Введите количество элементов массива: ");
    scanf_s("%zu", &n);

    if (n == 0) {
        printf("Массив не может быть пустым!\n");
        return 1;
    }

    // Выделяем память для массива
    unsigned* A = (unsigned*)malloc(n * sizeof(unsigned));
    if (A == NULL) { // Проверяем, удалось ли выделить память
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    printf("Введите %zu натуральных чисел:\n", n);
    for (size_t i = 0; i < n; ++i) {
        scanf_s("%u", &A[i]);
    }

    unsigned result = task1(A, n);
    printf("Сумма элементов, совпадающих с их индексами: %u\n", result);

    // Освобождаем память
    free(A);

    return 0;
