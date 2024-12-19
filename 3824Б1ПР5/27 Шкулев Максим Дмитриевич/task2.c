#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

long long task2(unsigned *A, size_t n) {
    long long min_local_min = LLONG_MAX; // Инициализируем минимальное значение локального минимума большим значением
    int found_local_min = 0; // Флаг для отслеживания наличия локальных минимумов

    // Проходим по массиву, начиная со второго элемента и заканчивая предпоследним
    for (size_t i = 1; i < n - 1; i++) {
        // Проверяем, является ли текущий элемент локальным минимумом
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            found_local_min = 1; // Находим локальный минимум
            if (A[i] < min_local_min) {
                min_local_min = A[i]; // Обновляем минимальный локальный минимум
            }
        }
    }

    // Проверка крайних элементов (первый и последний) на локальные минимумы
    if (n > 1) {
            found_local_min = 1;
        if (A[0] <= A[1]) {
            if (A[0] < min_local_min) {
                min_local_min = A[0];
            }
        }
        if (A[n - 1] <= A[n - 2]) {
            found_local_min = 1;
            if (A[n - 1] < min_local_min) {
                min_local_min = A[n - 1];
            }
        }
    }

    // Если локальные минимумы найдены, возвращаем минимальный из них, иначе возвращаем -1
    return found_local_min ? min_local_min : -1;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    size_t n = 0;
    size_t capacity = 2; // Начальная емкость массива
    unsigned *A = (unsigned *)malloc(capacity * sizeof(unsigned));
    
    if (A == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    printf("Введите элементы массива (введите -1 для завершения ввода):\n");
    
    while (1) {
        unsigned value;
        scanf("%u", &value);
        
        if (value == (unsigned)-1) { // Условие для выхода из цикла
            break;
        }

        // Если достигнута емкость массива, увеличиваем его размер
        if (n >= capacity) {
            capacity *= 2; // Увеличиваем емкость в два раза
            A = (unsigned *)realloc(A, capacity * sizeof(unsigned));
            if (A == NULL) {
                printf("Ошибка выделения памяти.\n");
                return 1;
            }
        }
        
        A[n++] = value; // Добавляем элемент в массив и увеличиваем размер
    }

    long long result = task2(A, n);

    if (result != -1) {
        printf("Минимальный локальный минимум: %lld\n", result);
    } else {
        printf("Локальные минимумы не найдены.\n");
    }

    // Освобождаем выделенную память
    free(A);

    return 0;
}
