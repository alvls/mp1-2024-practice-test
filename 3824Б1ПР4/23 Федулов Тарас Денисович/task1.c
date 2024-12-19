// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вычислить сумму S тех элементов массива, значения которых совпадают с их индексами.
#include <stdio.h>
unsigned task1(unsigned A[], size_t n)
{
  unsigned sum = 0;
  for (size_t i = 0; i < n; i++) 
  {
       if (A[i] == i)
       {
         sum = sum + A[i];
       }
  }
  return sum;
}
