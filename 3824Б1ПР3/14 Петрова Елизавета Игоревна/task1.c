// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
#include <stddef.h> 

int task1(unsigned A[], size_t N)
{
  if (N == 0) 
  {
    return -1;
  }

  if (N == 1)
  {
    return 0; 
  }
    
  int lastExtremum = -1; 
  
  for (size_t i = 1; i < N - 1; ++i) 
  {
    if ( (A[i] > A[i - 1] && A[i] > A[i+1]) || (A[i] < A[i-1] && A[i] < A[i+1]) )
    { 
      lastExtremum = i;
    }
  }
    if(N >= 2)
    { 
        if( (A[N-1] > A[N-2]) || (A[N-1] < A[N-2]) )
        {
           lastExtremum = N-1;
        }
    }
    

  return lastExtremum;
}
