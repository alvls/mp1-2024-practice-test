// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
  if(n==0) return -1;
  if(n==1) return A[0];
  long long m = __LONG_LONG_MAX__;
  if (A[0] >= A[1])
    if ((long long)A[0]<m)
      m = (long long)A[0];
  for(int i = 1; i<(int)n-1; i++)
    if (A[i-1]<=A[i] && A[i]>=A[i+1])
      if ((long long)A[i]<m)
        m = (long long)A[i];
  if (A[n-1] >= A[n-2])
    if ((long long)A[n-1]<m)
      m = (long long)A[n-1];
  if (m==__LONG_LONG_MAX__) return -1;
  return m;
}