// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.

#include <stdio.h>
#include <stddef.h>

long long task2(unsigned A[], size_t n)
{
    // Если массив содержит меньше 3 элементов, локальных максимумов нет
    if (n < 3) {
        return -1;
    }

    long long maxLocalMax = -1;
    int hasLocalMax = 0;

    // Перебираем элементы массива от 1 до n-2 (проверка соседей возможна)
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
            if (!hasLocalMax || A[i] > maxLocalMax) {
                maxLocalMax = A[i];
                hasLocalMax = 1;
            }
        }
    }

    // Возвращаем -1, если локальных максимумов не найдено
    return hasLocalMax ? maxLocalMax : -1;
}

int main()
{
    unsigned A[] = {1, 3, 2, 5, 4, 6, 7, 6, 8, 3};
    size_t n = sizeof(A) / sizeof(A[0]);

    long long result = task2(A, n);
    if (result == -1) {
        printf("No local maxima found.\n");
    } else {
        printf("Maximum of local maxima: %lld\n", result);
    }

    return 0;
}
