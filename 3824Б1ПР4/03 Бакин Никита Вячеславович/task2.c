// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    // Функция для сравнения двух вещественных чисел
    if (*(float *)a < *(float *)b) return -1;
    if (*(float *)a > *(float *)b) return 1;
    return 0;
}

int main() {
    int n;

    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    float A[n]; 

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &A[i]);
    }

    qsort(A, n, sizeof(float), compare);

    int uniqueCount = 1; // Начинаем с 1, так как первый элемент уникален
    for (int i = 1; i < n; i++) {
        if (A[i] != A[i - 1]) {
            uniqueCount++;
        }
    }

    printf("Количество различных элементов массива: %d\n", uniqueCount);

    return 0;
}
