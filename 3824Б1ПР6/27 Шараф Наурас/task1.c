// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
    int firstZero = -1;
    int secondZero = -1;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            if (firstZero == -1) {
                firstZero = i;
            } else {
                secondZero = i;
                break;
            }
        }
    }
    
    if (firstZero != -1 && secondZero != -1) {
        for (int i = firstZero + 1; i < secondZero; i++) {
            sum += A[i];
        }
    }
    
    return sum;
}
