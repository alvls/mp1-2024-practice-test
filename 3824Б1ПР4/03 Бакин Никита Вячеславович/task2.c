// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
#include <stdio.h>
#include <stdbool.h>

// Функция для проверки наличия элемента в массиве
bool isPresent(double arr[], int size, double elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Размер массива должен быть больше нуля.\n");
        return 1;
    }

    double A[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    double unique[n];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        if (!isPresent(unique, uniqueCount, A[i])) {
            unique[uniqueCount] = A[i];
            uniqueCount++;
        }
    }

    printf("Количество разных элементов массива: %d\n", uniqueCount);

    return 0;
}
