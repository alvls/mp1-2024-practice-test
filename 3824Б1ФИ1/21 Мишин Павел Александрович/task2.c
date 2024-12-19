// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#inclue <math.h>
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
  int i, j;
  int min = A[0] + A[1] - R;
  int first_min = 0;
  int second_min = 1;
  int min_ind_sum = 0 + 1;
  int ind_sum;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      ind_sum = i + j;
      if (fabs(min) > fabs(A[i] + A[j] - R))
      {
        min = A[i] + A[j] - R;
        first_min = i;
        second_min = j;
        min_ind_sum = i + j;
      }
      if (fabs(min) == fabs(A[i] + A[j] - R) && min_ind_sum > ind_sum)
      {
        first_min = i;
        second_min = j;
        min_ind_sum = i + j;
      }
    }
  }

  struct Indices indices = { first_min, second_min };
  return indices;
}
