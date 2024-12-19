#include <stddef.h>
#include <float.h> 
#include <math.h> 
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(double A[], size_t n){
   if (n < 2){
     return (struct Indices) { -1, -1 };
 }

 double min_distance = DBL_MAX;
 int k1 = -1;
 int k2 = -1;

 for (size_t i = 0; i < n - 1; i++){
     for (size_t j = i + 1; j < n; j++){
         double distance = fabs(A[i] - A[j]);
         if (distance < min_distance){
             min_distance = distance;
             k1 = i;
             k2 = j;
         }
     }
 }
 return (struct Indices) { k1, k2 };
}
