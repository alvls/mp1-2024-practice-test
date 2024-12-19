#include <stdio.h> //В task1 тоже использовалась эта библиотека, но я забыл ее вам написать
// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.
int task2(unsigned A[], size_t n)
{
  unsigned series_length_max = 1;
  unsigned current_series_length = 1;
  for (unsigned i = 1; i < n; ++i) {
      if (A[i] == A[i - 1]) {
          current_series_length++;
      }
      else {
          if (current_series_length > series_length_max) {
              series_length_max = current_series_length;
          }
          current_series_length = 1;
      }
  }
  
  if (current_series_length > series_length_max){
      series_length_max = current_series_length;
  }
  
  return series_length_max;
}
