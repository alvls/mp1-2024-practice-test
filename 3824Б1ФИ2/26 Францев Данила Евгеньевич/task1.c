// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего правого соседа.
size_t task1(int A[], size_t n)
{
    int kolokol = 0;
    for (int j = 1; j < n; j++) {
        if (A[j] > A[j - 1]) { kolokol += 1; }
    }
    return kolokol;
}
