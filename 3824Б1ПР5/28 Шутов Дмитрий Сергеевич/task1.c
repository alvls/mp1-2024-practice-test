// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.


#include <stdio.h>

int task1(int A[], size_t n)
{
    int lastZero = -1;      
    int secondLastZero = -1; 

   
    for (int i = n - 1; i >= 0; --i) {
        if (A[i] == 0) {
            if (lastZero == -1) {
                lastZero = i;
            }
            else {
                secondLastZero = i; 
                break;
            }
        }
    }

    
    if (lastZero == -1 || secondLastZero == -1) {
        return 0;
    }

    
    int sum = 0;
    for (int i = secondLastZero + 1; i < lastZero; ++i) {
        sum += A[i];
    }

    return sum;
}
