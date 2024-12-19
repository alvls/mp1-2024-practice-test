// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n)
    int lastZeroIndex = -1;
    int secondLastZeroIndex = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == 0) {
            if (lastZeroIndex == -1) {
                lastZeroIndex = i;
            }
            else {
                secondLastZeroIndex = i;
                break;
            }
        }
    }

    if (secondLastZeroIndex == -1) {
        return -1111111111;
    }

    int sum = 0;
    for (int i = secondLastZeroIndex + 1; i < lastZeroIndex; i++) {
        sum += A[i];
    }

    return sum;
}
