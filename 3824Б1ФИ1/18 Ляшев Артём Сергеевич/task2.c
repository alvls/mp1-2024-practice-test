#include <stdio.h> 
#include <stdlib.h> 

void task2(unsigned A[], size_t n)
{
  int k = 0;
  int c = n; 
  int i;


  for (i = 1; i < n - 1; i++)
  {
    if (A[i] == A[i - 1])
      k++;
    else
      k = 0; 

    if (k == 2)
    {
      c -= 2;
      k = 0;
    }
  }

  int* B = (int*)malloc(c * sizeof(int));
  if (B == NULL)
  {
    printf("Ошибка выделения памяти\n");
    return;
  }

  k = 0; 
  i = 0; 

  while (i < n)
  {
    if (i < n - 2 && A[i] == A[i + 1] && A[i] == A[i + 2])
    {
      B[k++] = 0; 
      i += 3;
    }
    else
    {
      B[k++] = A[i++]; 
    }
  }

  for (int j = 0; j < k; j++)
    printf("%d ", B[j]);

  printf("\n");

}
