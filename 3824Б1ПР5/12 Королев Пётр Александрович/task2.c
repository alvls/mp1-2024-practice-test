// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся ровно два раза, на -1.
#include <limits.h>

void task2(int A[], size_t n) {
    int counts[1000] = {0}; 
    int max_val = 0;

    
    for (size_t i = 0; i < n; i++) {
        if (A[i] > max_val && A[i] < 1000){ 
            max_val = A[i];
        }
        if (A[i] >= 0 && A[i] < 1000){ 
            counts[A[i]]++;
        }
    }

    for (size_t i = 0; i < n; i++) {
        if (A[i] >= 0 && A[i] < 1000 && counts[A[i]] == 2) {  
            A[i] = -1;
        }
    }
}
