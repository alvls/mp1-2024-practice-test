// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
#include <stdio.h>
#include <stdlib.h>

void findMinMax(int arr[], int n, int *max, int *min) {

    if (n == 1) {
        *max = arr[0];
        *min = arr[0];
        return;
    }
    findMinMax(arr, n - 1, max, min);
    if (arr[n - 1] > *max)
        *max = arr[n - 1];
    if (arr[n - 1] < *min)
        *min = arr[n - 1];
}
