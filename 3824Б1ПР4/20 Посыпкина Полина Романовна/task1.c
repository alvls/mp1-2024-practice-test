// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к нечетным числам первый элемент,
// а к четным – последний. Первый и последний элементы массива не менять. 
void task1(unsigned A[], size_t N) {
    if (N <= 1) return;

    unsigned first = A[0];
    unsigned last = A[N - 1];

    for (size_t i = 1; i < N - 1; ++i) {
        if (A[i] % 2 == 0) {
            A[i] += last;
        } else {
            A[i] += first;
        }
    }
}
