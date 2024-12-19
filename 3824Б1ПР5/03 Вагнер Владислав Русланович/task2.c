#include <stdio.h>
#include <stdlib.h> // Для malloc и free
#include <locale.h>

// Функция для подсчета количества различных элементов массива
size_t task2(double A[], size_t n) {
    size_t unique_count = 0;

    for (size_t i = 0; i < n; i++) {
        int is_unique = 1; // Предполагаем, что элемент уникален
        for (size_t j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                is_unique = 0; // Найден повтор, элемент не уникален
                break;
            }
        }
        if (is_unique) {
            unique_count++;
        }
    }
    return unique_count;
}

    setlocale(LC_ALL, "RUSSIAN");
    size_t n;

    // Ввод размера массива
    printf("Введите размер массива n: ");
    if (scanf_s("%zu", &n) != 1 || n == 0) {
        printf("Некорректный ввод.\n");
        return 1;
    }

    // Динамическое выделение памяти для массива
    double* A = (double*)malloc(n * sizeof(double));
    if (A == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Ввод элементов массива
    printf("Введите элементы массива A:\n");
    for (size_t i = 0; i < n; i++) {
        printf("A[%zu] = ", i);
        if (scanf_s("%lf", &A[i]) != 1) {
            printf("Некорректный ввод.\n");
            free(A); // Освобождение памяти перед завершением
            return 1;
        }
    }

    // Вычисление и вывод результата
    size_t unique_count = task2(A, n);
    printf("Количество различных элементов массива: %zu\n", unique_count);

    // Освобождение памяти
    free(A);

    return 0;
