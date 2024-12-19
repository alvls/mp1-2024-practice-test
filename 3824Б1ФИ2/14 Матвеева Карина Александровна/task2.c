// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наименьшей серии.
#include <stdio.h>
void function(int min_length = n;int current_length = 1; int n);
{
  
    n = sizeof(A) / sizeof(A[0]);
    

    for (int i = 1; i < n; i++) {
        if (A[i] == A[i - 1]) {
            current_length++;
        } else {
            if (current_length < min_length) {
                min_length = current_length;
            }
            current_length = 1;
        }
    }

    if (current_length < min_length) {
        min_length = current_length;
    }

   
}
