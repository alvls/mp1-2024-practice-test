// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
  int min, max, imin, imax;
  min = A[0];
  max = A[0];
  imin = 0;
  imax = 0;
  
  for (int i = 1; i < N; i++)
  {
  	if (A[i] < min) { min = A[i]; imin = i; }
  	if (A[i] > max) { max = A[i]; imax = i; }
  }
  if (imin < imax) { return (imin); }
  else { return (imax); }
}
