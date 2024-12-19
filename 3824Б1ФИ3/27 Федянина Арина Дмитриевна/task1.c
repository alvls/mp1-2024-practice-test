// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
    int zero1 = -1;
    int zero2 = -1;
    int sum = 0;
    if (n < 2) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == 0) 
        {
            if (zero1 == -1) {
                zero1 = i;
            }
            else if (zero2 == -1) {
                zero2 = i;
                break; 
            }
        }
    }

  
    if (zero1 == -1 || zero2 == -1) {
        return 0;
    }


    if (zero2 - zero1 <= 1) {
        return 0;
    }

    for (int i = zero1 + 1; i < zero2; i++) {
        sum += A[i];
    }

    return sum;
}

