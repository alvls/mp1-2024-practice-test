#include <stddef.h>
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
  unsigned max = 0;
  int flag = 0;
  if(n < 3){
    return -1;
  }
  for(int i = 1; i < n-1; i++){
    if(A[i] >= A[i-1] && A[i] >= A[i+1]){
      flag = 1;
      if(A[i] > max){
        max = A[i];
      }
    }
  }
  if(flag){
    return max;
  }
  else{
    return -1;
  }
}