// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
#include <stdio.h>
#include <limits.h>
int task1(unsigned A[], size_t N)
{
  size_t first_min_index = -1;
    size_t last_max_index = -1;
    
    unsigned min_value = UINT_MAX;
    unsigned max_value = 0;
     for (size_t i = 0; i < N; i++) {
        if (A[i] < min_value) {
            min_value = A[i];
            first_min_index = i;
        }
        
        if (A[i] > max_value) {
            max_value = A[i];
            last_max_index = i; 
        } 
        else if (A[i] == max_value) {
            last_max_index = i; 
        }
    }
    if (first_min_index == -1 || last_max_index == -1) {
        return -1;
    }
    if (first_min_index < last_max_index) {
        return last_max_index - first_min_index - 1; 
    } 
    else {
        return 0; 
    }
}
