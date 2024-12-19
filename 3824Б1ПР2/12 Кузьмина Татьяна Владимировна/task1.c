// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <limits.h>
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
    int max = 0; // Переменная для хранения максимального значения
    int found = 0; // Флаг для отслеживания найденных элементов

    for (size_t i = 0; i < n; i++) {
        if (A[i] > a && A[i] < b) { // Проверяем, находится ли элемент в интервале (a, b)
            if (!found || A[i] > max) { // Если это первый найденный элемент или текущий больше максимального
                max = A[i]; // Обновляем максимальное значение
                found = 1; // Устанавливаем флаг, что элемент найден
            }
        }
    }

    return found ? max : 0; // Возвращаем максимальное значение или 0, если ничего не найдено
}
