// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <stdlib.h>
#include <math.h> 
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
  if (n < 2)
  {
    return (struct Indices){-1, -1};
  }
  int sum = 0;
  double raz = 100000000;
  struct Indices indices = {-2, -2};
  for (int i = 0;i < n;i++)
  {
    for(int j = i + 1;j < n;j++)
    {
      sum = A[i] + A [j];
      if (fabs(R - sum) < raz)
      {
        raz = fabs(R - sum);
        indeces.first_index = i;
        indeces.second_index = j;
      }
    }
  }
  return indices;
}
