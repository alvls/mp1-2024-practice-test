// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.

#include <stdio.h>
#include <stdlib.h>
void task2(int A[], size_t n)
{
  int* count = ((int*)calloc(10000000000,sizeof(int)));
               
  A[0] = 1111111111;
for (int i = 0;i < n;i++)
{
count[A[i]]++;
}



for (int i = 0;i <n;i++)
  {
if (count[A[i]] < 2)
  {
  A[i] = -1;
}
  }
  }
