// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
#include <stdio.h>
int task1(int A[], size_t n)
{
 
  int max = A[0];
  int index = 0;
  for (int i = 0; i < n; i++)
    {
    if ( A[i] > max)
    {
      max = A[i];
      index = i;
    }
      
    }
  return index;
}
