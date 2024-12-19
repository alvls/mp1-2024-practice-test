// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include<math.h>
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(double A[], size_t n)
{
  int diff = n;
  struct Indices indices = {-2, -2};
  for (size_t i = 0; i < n; i++) {
        if (A[i] == indices.first_index)
            for (size_t j = i + 1; j < n; j++) {
                if ((A[j] == indices.second_index) && (j - i) < diff)
              diff = j - i;
            }
    }
    if (diff == n)
        struct Indices indices = { -1, -1 };
  return indices;
}



  
   
