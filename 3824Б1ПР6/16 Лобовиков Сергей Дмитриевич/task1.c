// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.
#include<stdio.h>
#include<stdlib.h>
int task1(unsigned A[], size_t N)
{
    int first_index;
    int second_index;
    int min_num = 1e9, max_num = 0;
    for(int i = 0; i < N; i++)
    {
        if(A[i] > max_num)
        {
            max_num = A[i];
            first_index = i;
        }
        if(A[i] <= min_num)
        {
            min_num = A[i];
            second_index = i;
        }
    }
    if(first_index > second_index)
    {
        return first_index - second_index - 1;
    }else{
        return second_index - first_index - 1;
    }
}
