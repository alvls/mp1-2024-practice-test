// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к четным числам первый элемент,
// а к нечетным – последний.
void task1(unsigned A[], size_t N) {
    unsigned temp_first = A[0];
    A[0] = 1111111111;
    unsigned last = A[N - 1];

    for (size_t i = 1; i < N; i++) {
        if (A[i] % 2 == 0) {
            A[i] += A[0];
        } else {
            A[i] += last;
        }
    }

    if (temp_first % 2 == 0) {
        A[0] += A[0];
    } else {
        A[0] += last;
    }
}
