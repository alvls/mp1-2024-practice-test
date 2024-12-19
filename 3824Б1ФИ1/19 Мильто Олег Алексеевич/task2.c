// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 2 в массиве.
#include <stdio.h>
#include <stdlib.h>

int task2(unsigned A[], size_t n)
{
  if (n < 2)
  {
    return 0;
  }

  int count = 0;
  int res = 0;
  for (int i = 0; i < n - 1; ++i)
  {
    for (int j = i + 1; j < n; j++)
    {
      if ((A[i] == A[j]))
        count++;
      else
      {
        if (count != 1)
        {
          count = 0;
          i = j;
        }
        else
        {
          res += 1;
          count = 0;
        }
      }
    }
  }

  return res;
}
