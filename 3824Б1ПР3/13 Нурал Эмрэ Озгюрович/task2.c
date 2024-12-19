// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <limits.h>

int task2(unsigned A[], size_t n)
{
  int s = 1;
  int st, j;
  for (int i = 0; i < n-1; i++)
  {
  	st = 1;
	  while (1)
  	{
  		if ((i + st < n) && (A[i + st] == A[i]))
  		{
  			st += 1;
	  	}
	  	else
	  	{
	  		break;
  		}
  	}
  	if (st > s) { s = st; }
  }
  return s;
}
