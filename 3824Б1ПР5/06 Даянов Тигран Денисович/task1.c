// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
size_t task1(int A[], size_t n)
{
  return -1;
}

#include <stdio.h>

// Функция для подсчёта количества чисел, меньших своего правого соседа
size_t task1(int A[], size_t n) {
    // Если массив меньше чем два элемента, результат очевиден
    if (n < 2) {
        return 0;
    }

    size_t count = 0; // Счётчик чисеk по условию
    for (size_t i = 0; i < n - 1; i++) {
        if (A[i] < A[i + 1]) {
            count++;
        }
    }
    return count;
}

