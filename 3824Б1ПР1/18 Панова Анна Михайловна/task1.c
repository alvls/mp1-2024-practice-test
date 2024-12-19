// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
#include <malloc.h>
int* task1(int A[], size_t N) {
    int j = 0;
    int* n = (int*)malloc(sizeof(int) * N);
    if (n == NULL) {
        return NULL;
    }

    for (int i = 0; i < N; i += 2) {
        n[j] = A[i];
        j++;
    }
    for (int i = 1; i < N; i += 2) {
        n[j] = A[i];
        j++;
    }
    return n;
}
