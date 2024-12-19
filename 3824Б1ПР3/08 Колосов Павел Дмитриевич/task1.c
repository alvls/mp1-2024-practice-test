// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n) {
    int lastZeroIndex1 = -1;
    int lastZeroIndex2 = -1;
    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            lastZeroIndex2 = lastZeroIndex1;
            lastZeroIndex1 = i;
        }
    }
    if (lastZeroIndex2 != -1 && lastZeroIndex1 != -1) {
        int sum = 0;
        for (size_t i = lastZeroIndex2 + 1; i < lastZeroIndex1; i++) {
            sum += A[i];
        }

        return sum;
    }

    return 0;
}
