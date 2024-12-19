#include <stddef.h>
// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n)
{
    long long int cur_sum = 0;
    long long int total_sum = 0;
    int flag1 = 0;
    for(size_t i = 0; i < n; i++){
        if(A[i] == 0 && flag1 == 0){
            flag1 = 1;
            continue;
        }
        if(A[i] == 0){
            cur_sum = 0;
        }
        if(flag1){
            cur_sum += A[i];
            total_sum += A[i];
        }
    }
    total_sum -= cur_sum;
    return total_sum;
}