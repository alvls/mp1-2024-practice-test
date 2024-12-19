// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий в массиве.

#include<stdio.h>
#include<stdlib.h>

int task2(unsigned A[], size_t n)
{
  int series_count = 0;
  int temp = 0;
  for(int i = 0; i < n - 1; i++)
  {
    if(A[i] == A[i+1])
    {
      temp++;
    }else
    {
      if(temp >= 1) series_count++;
      temp = 0;
    }
  }
  if(temp > 0) series_count++;
  return series_count;
}

